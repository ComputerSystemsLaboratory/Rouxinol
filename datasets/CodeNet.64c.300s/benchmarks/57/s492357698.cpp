#include <iostream>
#include <algorithm>
#include <cassert>
#include <cctype>
#include <complex>
#include <cstdio>
#include <math.h>
#include <map>
#include <queue>
#include <string>
#include <vector>
using namespace std;

int R,C,s[10][10000];

int main(){
	while(cin>>R>>C){
		if(R+C==0)return 0;
		for(int i=0;i<R;i++)for(int j=0;j<C;j++)cin>>s[i][j];
		int ans=0;
		for(int i=0;i<pow(2,R);i++){
			for(int j=0;j<R;j++){
				if(i%(int)pow(2,j))for(int k=0;k<C;k++)s[j][k]=!s[j][k];
			}
			int a=0;
			for(int j=0;j<C;j++){
				int b=0;
				for(int k=0;k<R;k++)b+=s[k][j];
				a+=max(b,R-b);
			}
			ans=max(ans,a);
		}
		cout<<ans<<endl;
	}
}