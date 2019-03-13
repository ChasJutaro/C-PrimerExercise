#include <iostream>

using namespace std;

int main() {
	int i = 42;
	int *p1 = &i;
	clog << *p1 << endl;
	*p1 = *p1 * *p1;
	clog << *p1 << endl;
	return 0;
}
