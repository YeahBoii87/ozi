#include <iostream>
#include <string>
using namespace std;

int main() 
{
	int battery_percentage = 100;
	
	// we stop using our phone when battery is 5
	while (battery_percentage > 5) {	
		cout << "Using my phone!" << endl;
		battery_percentage--;
		cout << "Battery percentage is " << battery_percentage <<endl;
	}

	cout << "My Phone is about to die let me stop" <<endl;
}
