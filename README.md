ACCEL-PPTPD Server

After trying to find a newer version of PPTP Server with Kernel Driver support
I started to change POPTOP PPTP Server version 1.4.0 and add Kernel Driver support
ported from accel-pptp 1.3.3.
For more information check here http://accel-pptp.sourceforge.net/
The idea is pretty simple: create a socket AF_PPPOX of type PX_PROTO_PPTP.
Then lunch PPP with plugin pptp.so which will configure the pptp kernel driver 
with endpoints and then everything is encapsulated/dencapsulated via kernel driver

I'm using this software because is very easy to integrate radius and other plugins.


