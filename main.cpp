#include "ppm.h"
#include "vector3.h"

using namespace PPM;

int main()
{
	ppm fileHandler;
	fileHandler.save_image(300, 100);
	return 0;
}