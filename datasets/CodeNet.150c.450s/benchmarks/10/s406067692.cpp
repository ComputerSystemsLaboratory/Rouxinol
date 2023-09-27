#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
#include<string>
#include<vector>
#include<cctype>
using namespace std;
int main(){
	int co[4][3][10]={0};//[棟][階][部屋]
	int n;
	cin>>n;int b,f,r,v;
	for(int i=0;i<n;i++){
		cin>>b>>f>>r>>v;//b棟f階のr番目の部屋にv人が追加で入居した
		b--;f--;r--;
		co[b][f][r]+=v;
	}
	for(int i=0;i<4;i++){
		for(int j=0;j<3;j++){
			for(int k=0;k<10;k++){
				cout<<" "<<co[i][j][k];
			}
			cout<<endl;
		}
		
		if(i<3)cout<<"####################"<<endl;
	}

return 0;
}