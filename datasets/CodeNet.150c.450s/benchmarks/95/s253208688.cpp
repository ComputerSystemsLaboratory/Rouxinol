#include<iostream>
#include<cmath>
#include<string>
#include<cstring>
#include<cstdlib>
#define loop(i,a,b) for(int i=a;i<b;i++)
#define rep(i,a) loop(i,0,a)
using namespace std;

int main(){
	int n;
	while(cin>>n,n){
		int right[n+1],left[n+1];
		string s;
		right[0]=left[0]=0;//0:floor 1:on the stand
		rep(i,n){
			cin>>s;
			if(s=="lu"){//lu:left up
				left[i+1]=1;
				right[i+1]=right[i];
			}else if(s=="ru"){//ru:right up
				right[i+1]=1;
				left[i+1]=left[i];
			}else if(s=="ld"){//ld:left down
				left[i+1]=0;
				right[i+1]=right[i];
			}else if(s=="rd"){//rd:right down
				right[i+1]=0;
				left[i+1]=left[i];
			}
		}
		int cnt=0;
		for(int i=2;i<=n;i+=2){
			if(right[i-2]!=right[i] && left[i-2]!=left[i])cnt++;
		}
		cout<<cnt<<endl;
	}
	return 0;
}