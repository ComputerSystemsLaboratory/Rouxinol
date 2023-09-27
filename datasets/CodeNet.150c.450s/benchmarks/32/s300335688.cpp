#include<iostream>
#include<algorithm>
using namespace std;
int p[200];
int main(){
	int m,n1,n2;
	while(true){
	cin>>m>>n1>>n2;
	if(m==0&&n1==0&&n2==0)break;
	for(int i=0;i<m;i++){
		cin>>p[i];
	}
	int set,best=0;
	for(int i=n1;i<=n2;i++){
		if(best<=p[i-1]-p[i]){
			set=i;
			best=p[i-1]-p[i];
		}
	}
	cout<<set<<endl;
	}
	return 0;
}