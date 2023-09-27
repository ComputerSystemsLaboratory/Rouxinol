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
	void change(vector<int> idx){
		auto ret(num);
		for(int i = 0; i < size; i++){
			ret[i] = num[idx[i]];
		}
		swap(ret,num);
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
		change(idx);
	}
	void roll(int top, int front){
		int topidx,frontidx;
		for(int i = 0; i < size; i++){
			if(num[i] == top){
				topidx = i;
			}
		}
		switch(topidx){
			case 1:
				roll('N');
				break;
			case 2:
				roll('W');
				break;
			case 3:
				roll('E');
				break;
			case 4:
				roll('S');
				break;
			case 5:
				roll('S');
				roll('S');
				break;
		}
		vector<int> idx = {0,1,2,3,4,5};
		for(int i = 0; i < size; i++){
			if(num[i] == front){
				frontidx = i;
			}
		}
		switch(frontidx){
			case 1:
				break;
			case 2:
				idx = vector<int>{0,2,4,1,3,5};
				break;
			case 3:
				idx = vector<int>{0,3,1,4,2,5};
				break;
			case 4:
				idx = vector<int>{0,4,3,2,1,5};
				break;
		}
		change(idx);
	}
};
				

int main(){
	vector<int> a(6);
	for(auto &e : a)cin >> e;
	D dice(a);
	int q; cin >> q;
	for(int i = 0; i < q; i++){
		D temp = dice;
		int top,front; cin >> top >> front;
		temp.roll(top,front);
		cout << temp.num[2] << endl;
	}
	return 0;
}

