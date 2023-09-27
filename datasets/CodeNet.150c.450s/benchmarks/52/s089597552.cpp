#include <bits/stdc++.h>
#include <vector>
using namespace std;
int x, lol;
vector<int> vec;

int main(){
	lol = 0;
	while(cin >> x){
		if(x == 0){
			cout << vec[lol-1] << "\n";
			vec.erase(vec.begin()+(lol-1));
			lol--;
		}
		else{
			vec.push_back(x);
			lol++;
		}
	}
	
	
	return 0;
}