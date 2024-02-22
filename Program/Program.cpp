#include <iostream>
#include "Zergling.h"
#include "Hydra.h"
#include "Lurker.h"
#include "Beacon.h"
using namespace std;

int main()
{
#pragma region 업 캐스팅
	Beacon beacon;

	Zerg * zerg = new Zergling;
	zerg->SetHP(10);
	beacon.Trigger(zerg);
	delete zerg;
	cout << endl;

	zerg = new Hydra;
	zerg->SetHP(40);
	beacon.Trigger(zerg);
	delete zerg;
	cout << endl;

	zerg = new Lurker;
	zerg->SetHP(100);
	beacon.Trigger(zerg);
	delete zerg;

#pragma endregion



	return 0;
}