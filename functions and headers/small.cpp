#include <iostream>
#include "functions.h"

using namespace std;


int main() {
	int a = add(3, 4);
	cout << "3 + 4 is " << a << endl;
	cout << "3 + 4 + 5 is " << add(3, 4, 5) << endl;

	if (test(true)) {
		cout << "true passes the test " << endl;
	}
	if (test(3.2)) {
		cout << "3.2 passes the test " << endl;
	}

	
	return 0;
}
