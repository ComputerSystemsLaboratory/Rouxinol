#include <iostream>
using namespace std;
int d[105]={0},f[105]={0};
bool vi[105]={0};
int Time=0;
int k[105][105];

void dfs(int r,int n){

	vi[r]=true;
	d[r]=Time;
for(int i=0;i<n;i++){
	if(vi[i]!=true && k[r][i]==1){
		Time=Time+1;
		d[i]=Time;
		dfs(i,n);
		f[i]=Time;
	}
}
Time=Time+1;
f[r]=Time;
}
int main() {
int n,l,a,b;
cin>>n;
for(int j=0;j<n;j++){
	cin>>l>>a;
	for(int i=0;i<a;i++){
		cin>>b;
		k[j][b-1]=1;
	}
}
for(int g=0;g<n;g++){
	if(vi[g]!=true){
		Time=Time+1;
		dfs(g,n);
	}
	
}
for(int k=0;k<n;k++){

cout<<k+1<<" "<<d[k]<<" "<<f[k]<<endl;
}	
	return 0;
}