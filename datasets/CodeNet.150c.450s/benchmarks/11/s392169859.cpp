#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	int n;
	vector<pair<int,int>> v;
	cin >> n;
	for(int i=0;i<n;i++){
		char c;
		int a;
		cin >> c >> a;
		if(c=='S') c=0;
		if(c=='H') c=1;
		if(c=='C') c=2;
		if(c=='D') c=3;
		v.push_back(make_pair((int)c,a));
	}
	for(int i=0;i<4;i++){
		for(int j=1;j<=13;j++){
			if(find(v.begin(),v.end(),make_pair(i,j)) == v.end()){
				if(i==0) cout << "S " << j << endl;
				if(i==1) cout << "H " << j << endl;
				if(i==2) cout << "C " << j << endl;
				if(i==3) cout << "D " << j << endl;
			}
		}
	}
	return 0;
}