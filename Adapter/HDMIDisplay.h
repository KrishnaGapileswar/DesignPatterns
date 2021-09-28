#ifndef HDMI_DISPLAY
#define HDMI_DISPLAY

#include "HDMIInterface.h"
#include <string>
class HDMIDisplay : public HDMIInterface
{
public:
	HDMIDisplay(std::string displayData);
	~HDMIDisplay();

	virtual void display();
	std::string getData();

private:
	std::string data;
};

#endif //HDMI_DISPLAY
