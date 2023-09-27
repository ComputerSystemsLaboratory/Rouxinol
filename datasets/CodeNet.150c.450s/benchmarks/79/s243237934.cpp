#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,r;
	while(cin>>n>>r,n,r){
		vector<int>v;
		for(int i=0;i<n;i++){
			v.push_back(i+1);
			}
			
			for(int i=0;i<r;i++){
				int p,c;
				cin>>p>>c;
				
				for(int i=0;i<c;i++){
					v.push_back(v[n-c-p+1]);
					v.erase(v.begin()+n-c-p+1);
					}
				}
		cout<<v[n-1]<<endl;			
		}
		return 0;
	}