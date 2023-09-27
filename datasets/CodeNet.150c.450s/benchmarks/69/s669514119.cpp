#include <iostream>
#include <vector>
#include <iomanip>
#include <algorithm>
#define shosu(x) fixed<<setprecision(x)
using namespace std;
const int inf=10000000;

int n,num[10];

int main(){
	cin>>n;
	for(int i=0;i<n;i++){
		vector<int> l,r;
		l.push_back(-1*inf);
		r.push_back(-1*inf);
		bool ans=true;
		for(int j=0;j<10;j++){
			cin>>num[j];
		}
		l.push_back(num[0]);
		for(int j=1;j<10;j++){
			if(num[j]>l.back()&&num[j]>r.back()){
				if(l.back()>=r.back()) l.push_back(num[j]);
				else r.push_back(num[j]);
			}
			else{
				if(num[j]<=l.back()&&num[j]<=r.back()) ans=false;
				else{
					if(num[j]>l.back()) l.push_back(num[j]);
					else r.push_back(num[j]);
				}
			}
		}
		if(ans) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}