#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;
vector<int> v1;
int main(){
	int n;
	int a,b,c;
	while(cin>>n){
		if(!n)break;
		v1.clear();
		for(int i=0;i<n;i++){
			cin>>a;
			v1.push_back(a);
		}
		sort(v1.begin(),v1.end());
		b=1e9;
		for(int i=0;i<n-1;i++){
			a=v1[i+1]-v1[i];
			if(b>a)b=a;
		}
		cout<<b<<endl;
	}
}

