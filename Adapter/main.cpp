#include <iostream>
#include "VGADisplay.h"
#include "HDMIInterface.h"
#include "HDMIDisplay.h"
#include "VGAToHDMIAdapter.h"
int main()
{
	std::cout<<"Hello World!\n";

	VGADisplay vd("vga data");
	HDMIDisplay hd("hdmi data");

	vd.display();
	hd.display();

	HDMIInterface* hiPrime = new VGAToHDMIAdapter(vd);
	hiPrime->display();

	delete hiPrime;
	return 0;
}
