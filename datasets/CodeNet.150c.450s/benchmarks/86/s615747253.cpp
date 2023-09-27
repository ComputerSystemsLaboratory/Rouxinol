#include<iostream>
using namespace std;
int main(){
	int n,m,p,mon,pre,x,sum;
	while(cin>>n>>m>>p,n||m||p){
		pre=0;
		sum=0;
		for(int i=0;i<n;i++){
			cin>>x;
			if(i+1==m)
			pre=x;
			sum+=x;
		}
		mon=sum*(100-p);
		if(pre==0)
		cout<<0<<endl;
		else{
		mon=mon/pre;
		cout<<mon<<endl;
		}
	}
	return 0;
}