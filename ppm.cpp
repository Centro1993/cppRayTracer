#include "ppm.h"
#include "vector3.h"

using namespace PPM;
using namespace std;
using namespace Vector3;

void ppm::save_image(int xSize , int ySize)
{
	ofstream os;
	os.open("render.ppm");
	
	// ppm file header
	os << "P3\n";
	os << xSize << " " << ySize << "\n";
	os << "255\n";
	
	// ppm file body
	for(int x = 0; x < xSize; x++) {
		for(int y = 0; y < ySize; y++) {
			float r = float(x) / float(xSize) * 255;
			float g = float(y) / float(ySize) * 255;
			float b = (r * 2 + g) /3;
			vec3 col(r,g,b);
			os << int(col.r()) << " " << int(col.g()) << " " << int(col.b())<< "\n";
		}
	}
	os.close();
	cout << "Render finished!" << endl;
}