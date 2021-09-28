#ifndef VGA_INTERFACE
#define VGA_INTERFACE

class VGAInterface
{
public:
	virtual void display() = 0;
	virtual ~VGAInterface();
};

#endif //VGA_INTERFACE
