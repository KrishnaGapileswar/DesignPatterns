#ifndef VGA_DISPLAY
#define VGA_DISPLAY

#include <string>
#include "VGAInterface.h"
class VGADisplay : public VGAInterface
{

public:
	VGADisplay(std::string displayData);
	~VGADisplay();

	virtual void display();
	std::string getData();

private:
	std::string data;
};

#endif //VGA_DISPLAY
