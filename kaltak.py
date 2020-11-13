import socket
import os
import time

s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
s.settimeout(2)
os.system("clear")

print ("                                                             ")
print ("      /$$   /$$  /$$$$$$  /$$    /$$$$$$$$ /$$$$$$  /$$   /$$")
print ("     | $$  /$$/ /$$__  $$| $$   |__  $$__//$$__  $$| $$  /$$/")
print ("     | $$ /$$/ | $$  \ $$| $$      | $$  | $$  \ $$| $$ /$$/ ")
print ("     | $$$$$/  | $$$$$$$$| $$      | $$  | $$$$$$$$| $$$$$/  ")
print ("     | $$  $$  | $$__  $$| $$      | $$  | $$__  $$| $$  $$  ")
print ("     | $$\  $$ | $$  | $$| $$      | $$  | $$  | $$| $$\  $$ ")
print ("     | $$ \  $$| $$  | $$| $$$$$$$$| $$  | $$  | $$| $$ \  $$")
print ("     |__/  \__/|__/  |__/|________/|__/  |__/  |__/|__/  \__/")
print ("                                                             ")

print(" ______________________________")
print("(______________________________)")
print("|Dev : ArchL24                 |")
print("|Version : 0.0.1               |")
print("|______________________________|")
print("(______________________________)")

print("")

while True :

    host = input("Taranacak ip -- > ")
    print("")
    port = int(input("Taranacak port -- > "))

    print("")
    print("-----------------------------------------------------------")
    print("")

    def portScan(port) :

        if s.connect_ex((host , port)) :

            time.sleep(1)
            print("> [" , port , "]" , " - port kapalı")
            print("")

        else :

            print("> [" , port , "]" , " - port açık")
            print("")

    portScan(port)
