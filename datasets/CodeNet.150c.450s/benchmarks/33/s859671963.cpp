#include<bits/stdc++.h>
using namespace std;
int main(){
	int x,y,s;
	while(cin>>x>>y>>s,x){
		int ma = 0;
		for(int i = 1;i < s;i++){
			for(int j = i;j < s;j++){
				if(i*(100+x)/100 + j*(100+x)/100 != s)continue;
				int p = i*(100+y)/100 + j*(100+y)/100;
				ma = max(p,ma);
			}
		}
		cout<<ma<<endl;
	}
}