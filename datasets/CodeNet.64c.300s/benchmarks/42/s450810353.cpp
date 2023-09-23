#include <iostream>
#include <algorithm>
#include <functional>
#include <vector>
#include <cstdio>
#include <string>
#include <cmath>
#include <cfloat>
#include <map>
using namespace std;
void tansaku(int x,int y,int *n,int d[21][21]){
	if(d[y][x]==1){
		*n=*n-1;
		d[y][x]=0;
	}
	
}
int main(){
	
	int n;
	
	while(cin>>n,n!=0){
		int d[21][21]={0};
		int a,b;
		for(int i=0;i<n;i++){
			cin>>a>>b;
			d[b][a]=1;
		}
		int m;
		int x=10,y=10;
		cin>>m;
		int k;
		string s;
		for(int i=0;i<m;i++){
			cin>>s>>k;
			for(int j=0;j<k;j++){
			if(s=="N")
				y++;
			else if(s=="S")
				y--;
			else if(s=="E")
				x++;
			else
				x--;
			tansaku(x,y,&n,d);
	}
		}
		if(n!=0)
			cout<<"No"<<endl;
		else
			cout<<"Yes"<<endl;
		
	}
}