#include "bmp180_rpi.h"

int main(int argc, char **argv)
{
	bmp180_get_cal_param();
	temperature = bmp180_get_temperature(bmp180_get_ut());
	pressure = bmp180_calpressure(bmp180_get_up());
	height = atoi(argv[1]);
	pressure_at_sea_level = bmp180_pressure_at_sea_level(pressure);
	printf("Temperature\t\t%0.1f\tdegrees Celsius\n", ((float)temperature / 10));
	printf("Pressure\t\t%0.1f\thPa\n", ((float)pressure / 100));
	printf("Pressure at sea level\t%0.1f\thPa\n", ((float)pressure_at_sea_level / 100));
	return 0;
}
