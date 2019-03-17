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
	
	for(decltype(ivec.size()) index = 0; index != ivec.size(); ++index){
		sum = ivec[index] + ivec[ivec.size() - index - 1];
		cout << sum << ":";		
	}

	cout << endl;

	return 1;

}
