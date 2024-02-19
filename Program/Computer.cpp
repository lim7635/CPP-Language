#include "Computer.h"

Computer::Computer()
{
	cout << "Create Computer" << endl;
}

Computer::~Computer()
{
	cout << "Release Computer" << endl;
}

void Computer::Use()
{
	Typing();
	Ondrag();

	Mouse::Connect();
	Keyboard::Connect();
}
