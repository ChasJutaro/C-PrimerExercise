#include <iostream>

using namespace std;

int main(){
	
	int i = 0, &r = i;
	auto a = r;
	const int ci = i, &cr = ci;
	auto b = ci;
	auto c = cr;
	auto d = &i;
	auto e = &ci;
	auto &g = ci;

	cout << a << "\t" << b << "\t" << c << "\t" << d << "\t" << e << "\t" << g << endl;

	a = 42;
	b = 42;
	c = 42;
	d = 42;
	e = 42;
	g = 42;
	
	cout << a << "\t" << b << "\t" << c << "\t" << d << "\t" << e << "\t" << g << endl;

	return 1;
}
