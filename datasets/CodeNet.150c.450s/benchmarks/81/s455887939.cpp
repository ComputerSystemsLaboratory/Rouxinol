#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;
int main(){
	int n,t[20],d[20][20],temp,num,a,b,c,qq;
	while(cin>>n,n){
		temp=INT_MAX;
		qq=0;
		for(int i=0;i<10;i++)
		for(int j=0;j<10;j++){
			d[i][j]=INT_MAX/2;
			t[j]=0;
		}
		for(int i=0;i<n;i++){
			d[i][i]=0;
			cin>>a>>b>>c;
			if(qq<a)
			qq=a;
			if(qq<b)
			qq=b;
			d[a][b]=c;
			d[b][a]=c;
		}
		qq++;
		
		for(int k=0;k<qq;k++)
		for(int i=0;i<qq;i++)
		for(int j=0;j<qq;j++)
		d[i][j]=min(d[i][j],d[i][k]+d[k][j]);
		for(int i=0;i<qq;i++){
			for(int j=0;j<qq;j++){
				t[i]+=d[i][j];
			}
			if(temp>t[i]){
				temp=t[i];
				num=i;
			}
		}
		cout<<num<<' '<<temp<<endl;
	}
	return 0;
}