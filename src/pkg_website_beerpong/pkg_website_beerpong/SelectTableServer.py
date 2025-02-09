from select_table_interfaces.srv import TableSelect
import rclpy
from rclpy.node import Node
from SelectedTable import SelectedTable
from threading import Timer


class MinimalService(Node):

    def __init__(self):
        if not rclpy.ok():
            rclpy.init(args=None)
            print("ROS-Kontext initialisiert, da noch nicht vorhanden!")
        super().__init__('table_server')
        self.srv = self.create_service(TableSelect, 'table_server', self.selectedTable_callback)
        print("Node wurde initialisiert: table_server")

    def selectedTable_callback(self, request, response):
        response.table_id = SelectedTable.table_id

        return response
    
    def shutdown_node(self):
        print("Service wird zerstört")
        rclpy.shutdown()
        print("Service zerstört")
        SelectedTable.table_id = 0


    def main(args=None):
        print("Currently executing: Main method of MinimalService")
        #rclpy.init()
        node = MinimalService()
        try:
            #rclpy.spin(node)
            #rclpy.spin('table_server')
            rclpy.spin(node)
        except Exception as e:
            print(f"Ein Fehler ist aufgetreten: {e}")
        finally:
            node.destroy_node()
            if not rclpy.ok():
                rclpy.shutdown()  


if __name__ == "__main__":
    main()
