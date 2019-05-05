# Zephyr VM Installation

### Download a copy of our VM

*Note: Install and use VirtualBox, other VM software such as VMWare are not tested to work.*

*Insert link here*

Import the copy of the VM by going to *File->Import Appliance* and finding the .ova file you just downloaded.  
Login to *User* with the password *pass*

### Setting Up QEMU with Net-Tools

Open 4 terminals

In terminal **1** go to your net-tools directory    
`cd Documents/zephyrproject/net-tools`  
and run `./loop-socat.sh`

In terminal **2** go to your net-tools directory and run  
`sudo ./loop-slip-tap.sh`

In terminal **3** go to your Downloads directory  
`cd Downloads`  
and run `java -jar leshan-server-demo.jar`

In terminal **4** go to your zephyr directory   
`cd Documents/zephyrproject/zephyr`  
and run `source zephyr-env.sh`  
Inside the zephyr directory go to the project directory   
`cd samples/net/lwm2m_client`  
Now build the lwm2m_client project  
`west build -b qemu_x86`  
Run the lwm2m_client project  
`west build -t run`

### Run the local host program

Run a browser and go to  
`http://localhost:8080`
