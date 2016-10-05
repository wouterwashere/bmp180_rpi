# bmp180_rpi
Library to read BMP180 barometric pressure sensors with Raspberry Pi in C

Change bmp180_rpi.c to fit your needs.

Compile with:

gcc smbus.c bmp180_rpi.c -lm -o bmp180 (and your preferred options like -Wall -Ofast -mfpu=vfp -mfloat-abi=hard -march=armv6zk -mtune=arm1176jzf-s)

The program needs to get a height parameter in order to calculate pressure at sea level.

Start the program with ./bmp180 200 -- where 200 is the height in meters above sea level of your measurement location.
