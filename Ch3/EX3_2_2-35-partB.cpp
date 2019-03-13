#include <iostream>
#include <string>

using namespace std;

int main() {
	string str;
	string str_total;
	while(cin >> str)
	{
		str_total += " ";
		str_total += str;
	}

	cout << "The final string is:" << str_total << endl;
	
	return 1;

}
