#include<iostream>
#define loop(i,a,b) for(int i=a;i<b;i++)
#define rep(i,a) loop(i,0,a)
using namespace std;

int func(int X,int A,int B,int C){return (A*X+B)%C;}

int main(){
	int n,a,b,c,x;
	while(1){
		cin>>n>>a>>b>>c>>x;
		if(!n && !a && !b && !c && !x)break;
		int lucky[n];
		rep(i,n)cin>>lucky[i];
		int cnt=0,place=0;
		while(cnt<=10000){
			if(x==lucky[place])place++;
			if(place>=n)break;
			x=func(x,a,b,c);
			cnt++;
		}
		if(cnt>10000)cout<<-1<<endl;
		else cout<<cnt<<endl;
	}
	return 0;
}