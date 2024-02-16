#include "Phone.h"

int Phone::GetVolume()
{
	return volume;
}

void Phone::SetVolume(int volume)
{
	if (volume >= 100 || volume <= 0)
	{
		return;
	}

	this->volume = volume;
	cout << "phone1ÀÇ volume °ª : " << this->volume << endl;
	
}
