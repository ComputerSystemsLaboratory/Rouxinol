#include<iostream>
#include<string>
using namespace std;
int main(){
	int n,m;
	int x[100],y[100];
	while(true){
		cin>>n>>m;
		if(n==0&&m==0)
			break;
		int w=0,h=0;
		for(int i=0;i<n;i++){
			cin>>x[i];
			w+=x[i];
		}
		for(int i=0;i<m;i++){
			cin>>y[i];
			h+=y[i];
		}
		for(int i=0;i<n-1;i++){
			for(int j=n-1;j>i;j--){
				if(x[j]<x[j-1]){
					int tmp=x[j];
					x[j]=x[j-1];
					x[j-1]=tmp;
				}
			}
		}
		for(int i=0;i<m-1;i++){
			for(int j=m-1;j>i;j--){
				if(y[j]<y[j-1]){
					int tmp=y[j];
					y[j]=y[j-1];
					y[j-1]=tmp;
				}
			}
		}
		int i=0,j=0;
		bool broken=true;
		while(true){
			j=0;
			while(true){
				if(x[i]*2+h==y[j]*2+w){
					broken=false;
					break;
				}
				j++;
				if(j==m)
					break;
			}
			if(broken==false)
				break;
			i++;
			if(i==n)
				break;
		}
		if(broken==true)
			cout<<"-1"<<endl;
		else
			cout<<x[i]<<" "<<y[j]<<endl;
	}
    return 0;
}