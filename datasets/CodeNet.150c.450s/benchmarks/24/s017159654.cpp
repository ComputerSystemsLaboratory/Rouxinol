#include<iostream>
#include<string>
using namespace std;
int d[10000],p[10000];
int main(){
	int n,m;
	while(true){
	cin>>n>>m;
	if(n==0&&m==0)
		break;
	int load=0;
	for(int i=0;i<n;i++){
		cin>>d[i]>>p[i];
		load+=d[i];
	}
	if(load<=m)
		cout<<"0"<<endl;
	else{
		int count=0;
		for(int i=0;i<n-1;i++){
			for(int j=n-1;j>i;j--){
				if(p[j]<p[j-1]){
					int tmp=p[j];
					p[j]=p[j-1];
					p[j-1]=tmp;
					tmp=d[j];
					d[j]=d[j-1];
					d[j-1]=tmp;
				}
			}
		}
		int i=0;
		m=load-m;
		while(true){
			if(m<=d[i]){
				count+=m*p[i];
				break;
			}
			count+=d[i]*p[i];
			m-=d[i];
			i++;
		}
		cout<<count<<endl;
	}
	}
	return 0;
}