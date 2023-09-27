#include <bits/stdc++.h>


using namespace std;

struct D{
	int size;
	vector<int> num;

	D(){
		size = 6;
		num = vector<int>{1,2,3,4,5,6};
	}
	D(vector<int> _num){
		size = _num.size();
		num = _num;
	}
	void roll(char c){
		vector<int> idx{0,1,2,3,4,5};
		switch(c){
			case 'S':
				idx = vector<int>{4,0,2,3,5,1};
				break;
			case 'N':
				idx = vector<int>{1,5,2,3,0,4};
				break;
			case 'W':
				idx = vector<int>{2,1,5,0,4,3};
				break;
			case 'E':
				idx = vector<int>{3,1,0,5,4,2};
				break;
		}
		vector<int> ret(num);
		for(int i = 0; i < size; i++){
			ret[i] = num[idx[i]];
		}
		swap(ret,num);
	}
};
				

int main(){
	vector<int> a(6);
	for(auto &e : a)cin >> e;
	string s; cin >> s;
	D dice(a);
	for(auto e : s)dice.roll(e);
	cout << dice.num[0] << endl;

	return 0;
}

