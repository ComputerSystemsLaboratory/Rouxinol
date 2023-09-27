#include <iostream>
using namespace std;
int a[100][100]={},f[100]={},d[100]={},T[200]={};
int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int u,k;
		cin>>u>>k;
		for(int j=0;j<k;j++){
			cin>>a[u][j];
		}
	}
	T[1]=1;
	f[1]=1;
	int s=1;
	for(int time=2;time<=2*n;time++){
		for(int j=0;j<100;j++){
			if(a[T[time-1]][j]==0){
				d[T[time-1]]=time;
				if(f[T[time-1]]==s){
					for(int i=1;i<n;i++){
						if(f[i]==0){
							T[time+1]=i;
							time++;
							f[i]=time;
							break;
						}
					}
					s=time;
				}else{
					T[time]=T[f[T[time-1]]-1];
				}
				break;
			}
			else if(f[a[T[time-1]][j]]==0){
				f[a[T[time-1]][j]]=time;
				T[time]=a[T[time-1]][j];
				break;
			}
		}
	}
	for(int i=1;i<=n;i++){
		cout<<i<<" "<<f[i]<<" "<<d[i]<<endl;
	}
}