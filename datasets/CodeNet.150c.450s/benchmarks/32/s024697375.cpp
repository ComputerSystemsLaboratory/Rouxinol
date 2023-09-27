#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> v1;

int main(){
	int n,p,q;
	int i,j,k;
	int a,b,c;
	int s=0;
	while(cin>>n>>p>>q){
		if(!n)break;
		p--,q--;
		v1.clear();
		for(i=0;i<n;i++){
			cin>>a;
			v1.push_back(a);
		}
		sort(v1.rbegin(),v1.rend());
		a=0;
		for(i=p;i<=q;i++){
			if(a<=v1[i]-v1[i+1]){
				a=v1[i]-v1[i+1];
				s=i+1;
			}
		}
		cout<<s<<endl;
	}
}
	

