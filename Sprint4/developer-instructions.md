You can choose to install Zephyr SDK or install our Zephyr VM copy.
# Zephyr SDK Installation
Download the latest SDK as a self-extracting installation binary:

`wget https://github.com/zephyrproject-rtos/sdk-ng/releases/download/v0.10.0/zephyr-sdk-0.10.0-setup.run`

Run the installation binary:

`cd <sdk download directory>`

`sh zephyr-sdk-0.10.0-setup.run`

Follow the installation instructions on the screen. The toolchain’s default installation location is `/opt/zephyr-sdk/`, but it is recommended to install the SDK under your home directory instead.
To install the SDK in the default location, you need to run the installation binary as root.

To use the Zephyr SDK, export the following environment variables and use the target location where SDK was installed:

`export ZEPHYR_TOOLCHAIN_VARIANT=zephyr`

`export ZEPHYR_SDK_INSTALL_DIR=<sdk installation directory>`
# Zephyr VM Installation

### Download a copy of our VM

*Note: Install and use VirtualBox, other VM software such as VMWare are not tested to work.*

[Zephyr VM Download](https://mega.nz/#!u6JzUQyJ!tROere43NketAer3U5n67D6VSZV-61OoFQU1a_UX1YY "ZephyrOS")

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
*There should already be a build folder if you downloaded the above VM copy, if there is, skip this next line*  
Build the lwm2m_client project  
`west build -b qemu_x86`  
Run the lwm2m_client project  
`west build -t run`

### Run the local host program

Run a browser and go to  
`http://localhost:8080`
