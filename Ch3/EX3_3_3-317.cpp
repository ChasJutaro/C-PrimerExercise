#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
	vector<string> word_store;
	string temp;
	while(cin >> temp){
		word_store.push_back(temp);
	}
	
	int cnt = 0;

	for(auto &i : word_store){
		for(auto &c : i){
			c = toupper(c);
		}
	       	cout << i << " ";
		cnt ++;
		if(cnt == 8){
			cout << "\n";
			cnt = 0;
		}
	}

	return 1;

}
