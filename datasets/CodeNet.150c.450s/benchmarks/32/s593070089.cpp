#include<bits/stdc++.h>
using namespace std;

int main(){
	int m,n1,n2;
	while(cin>>m>>n1>>n2,m){
		vector<int> p(m);
		for(int i=0;i<m;++i) cin>>p[i];
		int resgap=0;
		int resi=0;
		for(int i=n1;i<=n2;i++){
			int gap=p[i-1]-p[i];
			if(resgap<=gap){
				resgap=gap;
				resi=i;
			}
		}
		cout<<resi<<endl;
	}
}