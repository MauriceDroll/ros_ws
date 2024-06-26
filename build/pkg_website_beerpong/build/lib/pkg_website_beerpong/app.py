from flask import Flask, render_template,request, jsonify
from SelectTablePublisher import SelectTablePublisher
from SelectedTable import SelectedTable
#from SelectTableService import  MinimalClientAsyn
from SelectTableServer import MinimalService

import rclpy
from rclpy.node import Node

app = Flask(__name__)

@app.route('/')
def home():
    return render_template('index.html')

@app.route('/button_click', methods=['POST'])
def button_click():
    button_id = request.form['button_id']
    
    # Hier kannst du die gewünschte Methode basierend auf der Button-ID aufrufen
    # call my method
    if (button_id == "1"):
        print("Tisch 1 wurde ausgewählt!")
        SelectedTable.table_id = 1
        #SelectTablePublisher.main(args=None)
        #MinimalClientAsync.sendServiceRequest()
        #SelectTablePublisher.main(1)
        
    elif (button_id == "2"):
        SelectedTable.table_id = 2
        #electTablePublisher.main(args=None)
        #SelectTablePublisher(2)
        #MinimalClientAsync.sendServiceRequest()

        print("Tisch 2 wurde ausgewählt!")
        
    elif (button_id == "3"):
        SelectedTable.table_id = 3
        #SelectTablePublisher.main(args=None)
        
        #MinimalClientAsync.sendServiceRequest()

        #SelectTablePublisher(3)
        print("Tisch 3 wurde ausgewählt!")
    
    
    
    #if hasattr(None,'server'):
    if rclpy.ok():
        print("hauptklasse: Service wird zerstört")
        #server.shutdown_node()
        rclpy.shutdown()
    else:
        server = MinimalService()
        rclpy.spin(server)
        #rclpy.shutdown()


    #server.main()
    #rclpy.spin(server)
    #MinimalService.main()
    
    
    
    return jsonify({"message": f"Tisch {button_id} was selected!"})

@app.route('/init', methods=['POST'])
def init():
    SelectedTable.table_id = 0
    #SelectTablePublisher.main(args=None)
    return jsonify({"message": f"Init!"})

if __name__ == '__main__':
    app.run(debug=True,host='127.0.0.1', port=8080)
    
