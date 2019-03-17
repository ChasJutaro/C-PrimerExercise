#include <iostream>
#include <string>

using namespace std;

int main(){
	string str;
	cin >> str;
	for(auto &c : str){
		c = toupper(c);	
	}

	cout << str << endl;

	return 1;
}
