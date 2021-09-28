#include "VGADisplay.h"

#include <iostream>

VGADisplay::VGADisplay(std::string displayData)
	: data(displayData)
{
	std::cout<<"VGA Display constructed\n";
}

std::string VGADisplay::getData()
{
	return data;
}

VGADisplay::~VGADisplay()
{
	std::cout<<"VGA Display destructed\n";
}

void VGADisplay::display()
{
	std::cout<<"From VGA ---> "<<data<<"\n";
}
