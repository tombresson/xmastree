from particle import particle

from flask import Flask
from flask import render_template
from flask import url_for
app = Flask(__name__)

@app.route("/")
def hello(name=None):
    app.jinja_env.globals.update(getSongs=particle.getSongs)
    url_for('static', filename='style.css')
    return render_template('index.html', name=name)

