#include<iostream>
using namespace std;
int main(){
	int n,a,now,b,c,x,y[1010];
	while(cin>>n>>a>>b>>c>>x,n){
		now=0;
		for(int i=0;i<n;i++)
		cin>>y[i];
		int i;
		for(i=0;i<=10000;i++){
			if(x==y[now]){
				now++;
				if(now==n)
				break;
			}
			x=(x*a+b)%c;
		}
		if(i==10001)
		cout<<-1<<endl;
		else
		cout<<i<<endl;
	}
	return 0;
}