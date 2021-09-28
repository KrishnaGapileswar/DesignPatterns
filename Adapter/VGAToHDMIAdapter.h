#ifndef VGA_TO_HDMI_ADAPTER
#define VGA_TO_HDMI_ADAPTER

#include "HDMIInterface.h"
#include "VGADisplay.h"

class VGAToHDMIAdapter : public HDMIInterface
{
public:
	VGAToHDMIAdapter(VGADisplay vgaDisp);
	~VGAToHDMIAdapter();

	virtual void display();
private:
	VGADisplay vd;
};

#endif //VGA_TO_HDMI_ADAPTER
