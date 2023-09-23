#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	vector<int> mt;
	int i, tmp;
	for(i=0;i<10;i++){
		cin >> tmp;
		mt.push_back(tmp);
	}
	sort(mt.begin(), mt.end());
	reverse(mt.begin(), mt.end());
	for(i=0;i<3;i++){
		cout << mt[i] << endl;
	}
    return 0;
}