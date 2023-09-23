#include<iostream>
#define loop(i,a,b) for(int i=a;i<b;i++)
#define rep(i,a) loop(i,0,a)
using namespace std;

int main(){
	int n;
	while(cin>>n,n){
		int dt[1001];
		dt[0]=0;
		loop(i,1,1001)dt[i]=dt[i-1]+i;
		int cnt=0;
		loop(i,1,n+1){
			loop(j,i+1,n+1)if(dt[j]-dt[i]+i==n){
				cnt++;
			}
		}
		cout<<cnt<<endl;
	}
	return 0;
}
