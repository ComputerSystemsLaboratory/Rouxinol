#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	while(cin>>n,n){
		bool l = false,r = false,now = true;
		int cnt = 0;
		for(int i = 0;i < n;i++){
			string f;
			cin>>f;
			if(f[0] == 'l')l = !l;
			if(f[0] == 'r')r = !r;
			if(l==r && r==now){
				now = !now;
				cnt++;
			}
			//cout<<"#"<<l<<" "<<r<<" "<<now<<endl;
		}
		cout<<cnt<<endl;
	}
}