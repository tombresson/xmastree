import particle_keys
import requests
import json

token = {'access_token': particle_keys.api_key}
device_id = particle_keys.device_id


def main():
    song_list = getSongs()
    print(song_list)


# Make a request to get the JSON Payload containing the Songs from the Particle API
def getSongs():
    r = requests.get('https://api.particle.io/v1/devices/' + device_id + '/songList', params=token)
    response_data = json.loads(r.text)
    key = 'result'
    if key in response_data:
        return ([str(i) for i in response_data[key].split(',')])


main()