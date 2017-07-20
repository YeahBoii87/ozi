#include <iostream>
#include <string>
using namespace std;

int main() {
	int ozi_text_mother_still = 10;
	while (ozi_text_mother_still > 0) {
		cout << "Ozi will text mother for " << ozi_text_mother_still << " more seconds" << endl;
		cout << "Rachel waits" << endl;
		ozi_text_mother_still--;
	}
	cout << "Yay! We can code together now!" << endl;
}
