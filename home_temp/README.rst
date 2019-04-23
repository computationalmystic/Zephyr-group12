Home Temperature Control
###########

Overview
********
A simple program that will ask you to input your preferable home temperature. It will then output your set temperature and tell you if it is heating or cooling your home.


Building and Running
********************

This project outputs your desired home temperature to the console.  It can be built and executed
on QEMU as follows:

.. zephyr-app-commands::
   :zephyr-app: home_temp
   :host-os: unix
   :board: qemu_x86
   :goals: run
   :compact:

Sample Output
=============

.. code-block:: console

    Your home is set to 70F.
