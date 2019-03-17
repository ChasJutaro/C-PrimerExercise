#include <iostream>
#include <string>

using namespace std;

int main(){
	string str;
	cin >> str;
	string::size_type index = 0;
	while(index != str.size()){
		char &c = str[index];
		c = toupper(c);
		++ index;	
	}

	cout << str << endl;

	return 1;
}
