#include "bmp180_rpi.h"

int main(int argc, char **argv)
{
	temperature = bmp180_get_temperature();
	pressure = bmp180_get_pressure();
	height = atoi(argv[1]);
	pressure_at_sea_level = bmp180_pressure_at_sea_level(pressure);
	printf("Temperature\t\t%0.1f\tdegrees Celsius\n", temperature);
	printf("Pressure\t\t%0.1f\thPa\n", pressure);
	printf("Pressure at sea level\t%0.1f\thPa\n", pressure_at_sea_level);
	return 0;
}
