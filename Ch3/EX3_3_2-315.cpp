#include <iostream>
#include <vector>

using namespace std;

int main(){
	string temp;
	vector <string> int_store;
	while(cin >> temp){
		int_store.push_back(temp);
	}

	for(auto beg = int_store.begin(); beg != int_store.end(); beg++)
		cout << *beg;

	cout << endl;

	return 1;
}
