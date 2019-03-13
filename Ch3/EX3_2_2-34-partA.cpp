#include <iostream>
#include <string>

using namespace std;

int main(){
	string str1, str2;
	cin >> str1 >> str2;
	if(str1 == str2){
		cout << "The two strings are equal!" << endl;
	}
	else if(str1 > str2){
		cout << str1 << " is bigger!" << endl;
	}
	else {
		cout << str2 << " is bigger!" << endl;
	}

	return 1;
}
