#ifndef HDMI_INTERFACE
#define HDMI_INTERFACE

class HDMIInterface
{
public:
	virtual void display() = 0;
	virtual ~HDMIInterface();
};

#endif //HDMI_INTERFACE
