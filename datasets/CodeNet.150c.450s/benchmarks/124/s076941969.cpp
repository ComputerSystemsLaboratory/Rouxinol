#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
const int maxx=1010;
const int infinity=1<<30;
int A[maxx][maxx],d[maxx];
bool flag[maxx];
int n,a,b,c;
	
int main (){
	cin>>n;
	for(int i=0;i<n;i++){
		flag[i]=false;
		d[i]=infinity;
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			A[i][j]=infinity;
		}
	}
	for(int i=0;i<n;i++){
		cin>>a>>b;
		for(int j=0;j<b;j++){
			cin>>c;
			cin>>A[a][c];
		}
	}
	d[0]=0;
	while(1){
		int minv=infinity,minj=-1;
		for(int i=0;i<n;i++){
			if(flag[i]==false && d[i]<minv){
				minv=d[i];
				minj=i;
			}
		}
		if(minv==infinity) break;
		flag[minj]=true;
		for(int i =0;i<n;i++){
			if(A[minj][i]!=infinity && flag[i]==false && d[i]>=d[minj]+A[minj][i]){
					d[i]=d[minj]+A[minj][i];
			}
		}
	}
	for(int i=0;i<n;i++) cout<<i<<" "<<(d[i]==infinity ? -1 : d[i])<<endl;
	
	return 0;

}
