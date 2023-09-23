#include<iostream>
#define loop(i,a,b) for(int i=a;i<b;i++)
#define rep(i,a) loop(i,0,a)
using namespace std;

int main(){
	int n;
	int buf[1000];
	buf[0]=0;
	loop(i,1,1001)buf[i]=buf[i-1]+i;
	while(cin>>n,n){
		int cnt=0;
		rep(i,n){
			for(int j=i+1;j<n;j++){
				if(buf[j]-buf[i]==n)cnt++;
			}
		}
		cout<<cnt<<endl;
	}
	return 0;
}