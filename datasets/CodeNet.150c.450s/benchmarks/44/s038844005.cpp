#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	vector<int> a(4);
	while(cin>>a[0]>>a[1]>>a[2]>>a[3]){
		vector<int> b(4);
		cin>>b[0]>>b[1]>>b[2]>>b[3];
		int h=0,bl=0;
		for(int i=0;i<4;++i){
			if(b[i]==a[i]) ++h;
			else if(find(a.begin(),a.end(),b[i])!=a.end()) ++bl;
		}
		cout << h << " " << bl << endl;
	}
	return 0;
}