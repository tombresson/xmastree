from particle import particle

from flask import Flask
from flask import render_template
from flask import url_for
from flask import request
from flask import make_response
app = Flask(__name__)

@app.route("/")
def main_page(name=None):
    app.jinja_env.globals.update(getSongs=particle.getSongs)
    url_for('static', filename='style.css')
    url_for('static', filename='jquery-3.4.1.min.js')
    return render_template('index.html', name=name)

@app.route("/control", methods=['POST'])
def control(name=None):
    response = "error"
    if request.method == 'POST':
        print(request.form)

        if(request.form['button'] == 'next_animation'):
            particle.nextAnimation()
            response = ""
        elif(request.form['button'] == 'prev_animation'):
            particle.prevAnimation()
            response = ""
        elif(request.form['button'] == 'play_song'):
            particle.playSong(request.form['song_idx'])
            response = ""

    return make_response(response)

