#include "VGAToHDMIAdapter.h"
#include <iostream>
#include <string>

VGAToHDMIAdapter::VGAToHDMIAdapter(VGADisplay vgaDisp)
	: vd(vgaDisp)
{
	std::cout<<"vga to hdmi adapter constructed\n";
}

VGAToHDMIAdapter::~VGAToHDMIAdapter()
{
	std::cout<<"vga to hdmi adapter destructed\n";
}

void VGAToHDMIAdapter::display()
{
	std::cout<<"adapting vga to hdmi..........\n";
	std::string data = vd.getData();
	std::cout<<"vga to hdmi adapted..... Displaying data....\n";
	std::cout<<data<<"\n";
}
