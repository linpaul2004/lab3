#include <iostream>
#include <fstream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
	ifstream input("file.in");
	int cows,ww;
	vector<int> w;
	input >> cows;
	while(cows--){
		input >> ww;
		w.push_back(ww);
	}
	sort(w.begin(),w.end());
	int total=0;
	for(int i=0;i<5;i++){
		total+=w.back();
		w.pop_back();
	}
	input.close();
	cout << total << endl;
	return 0;
}

