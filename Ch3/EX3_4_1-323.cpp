#include <iostream>
#include <vector>

using namespace std;

int main(){
	vector<int> ivec(10, 0);
	int temp;
	for(auto it_ivec = ivec.begin(); it_ivec != ivec.end(); ++it_ivec){
		cin >> temp;
		*it_ivec = temp;
	}
	
	cout << "The original vector is: \n";

	for(auto it_ivec = ivec.begin(); it_ivec != ivec.end(); ++it_ivec){
		cout << *it_ivec << ":";
		*it_ivec = 2 * (*it_ivec);
	}

	cout << "\n The revised vector is: \n";

	for(auto it_ivec = ivec.begin(); it_ivec != ivec.end(); ++it_ivec){
		cout << *it_ivec << ":";
	}

	cout << endl;

	return 1;
}
