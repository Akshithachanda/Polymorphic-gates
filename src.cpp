#include <iostream>
using namespacestd

class Device 
{
public:
	void Simulation_Code();
private:
	int Number_of_Terminals;
	int Device_type;

};

class Transistor : public Device
{

public:
	void Constructor();
private:
	int Number_of_terminals;
	int length;
	int width;
	// Other parameters to be added
};

class Capacitors : public Device
{
	
public:
	// Other paramenters defined here TBD
private:
	void Constructor();

};

class Resistors : public Device
{
public:
	// Other parameters defined here TBD
private:
	void Constructor();

};
