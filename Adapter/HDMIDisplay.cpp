#include "HDMIDisplay.h"
#include <iostream>

HDMIDisplay::HDMIDisplay(std::string displayData)
	: data(displayData)
{
	std::cout<<"HDMI Display constructed\n";
}

std::string HDMIDisplay::getData()
{
	return data;
}

HDMIDisplay::~HDMIDisplay()
{
	std::cout<<"HDMI Display destructed\n";
}

void HDMIDisplay::display()
{
	std::cout<<"From HDMI ---> "<<data<<"\n";
}
