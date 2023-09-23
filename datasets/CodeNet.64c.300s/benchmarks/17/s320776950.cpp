#include <iostream>
using namespace std;

int main (){
	int x,y,s;
	while(cin>>x>>y>>s && x){
		int ans=0;
		for(int i=1;i<s;i++){
			for(int j=1;j<s;j++){
				int a=i;
				int b=j;
				if(a*(100+x)/100+b*(100+x)/100==s){
					ans=max(ans,a*(100+y)/100+b*(100+y)/100);
				}
			}
		}
		cout<<ans<<endl;
	}
}

/*
5 8 105
8 5 105
1 2 24
99 98 24
12 13 26
1 22 23
1 13 201
13 16 112
2 24 50
1 82 61
1 84 125
1 99 999
99 1 999
98 99 999
1 99 11
99 1 12
0 0 0
*/
