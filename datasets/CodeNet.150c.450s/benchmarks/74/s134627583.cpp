#include<iostream>
#include<vector>
using namespace std;
int main(void){
	int n,m;
	cin>>n>>m;
vector<int> c(m);
vector<vector<int> > t(m,vector<int>(n+1,0));
for(int i=0;i<m;i++){
	cin>>c[i];
}
for(int i=0;i<m;i++){
	t[i][c[i]]=1;
}
for(int i=1;i<n+1;i++){
	for(int j=0;j<m;j++){
		if(c[j]==1){
			t[j][i]=t[j][i-1]+1;
		}else	if(c[j]>i){
			t[j][i]=t[j-1][i];
		}else if(t[j][i]==0){
			t[j][i]=min(t[j-1][i],t[j][i-c[j]]+1);
		}


	}

}
cout<<t[m-1][n]<<endl;
	return 0;
}