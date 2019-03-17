#include <iostream>
#include <vector>

using namespace std;

int main(){
	
	vector<int> ivec;
	int temp;
	bool flip = true;
	int sum;
	while(cin >> temp){
		ivec.push_back(temp);
	}
	
	for(auto i : ivec){
		if(!flip){
			sum += i;
			flip = true;
			cout << sum << "::";
		}
		else{
			sum = i;
			flip = false;
		}
		
	}

	cout << endl;

	return 1;

}
