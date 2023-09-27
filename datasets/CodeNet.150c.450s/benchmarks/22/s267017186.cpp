#include<bits/stdc++.h>
using namespace std;
int main(void){
	int	n,m,s;
	int x[2000],y[2000],d[2000];
	int leng[2000];
	int flg;
	int i,j;
	cin>>n>>m>>s;
	for(i=0;i<m;i++)	cin>>x[i]>>y[i]>>d[i];
	for(i=0;i<n;i++)	leng[i]=INT_MAX;
	leng[s]=0;
	for(i=0;i<=n;i++){
		flg=0;
		for(j=0;j<m;j++){
			if(leng[x[j]]!=INT_MAX&&leng[y[j]]>leng[x[j]]+d[j]){
				leng[y[j]]=leng[x[j]]+d[j];
				flg=1;
			}
		}
		if(flg==0)	break;
	}
	if(i>n&&flg==1)	cout<<"NEGATIVE CYCLE"<<endl;
	else{
		for(i=0;i<n;i++){
			if(leng[i]==INT_MAX)	cout<<"INF"<<endl;
			else					cout<<leng[i]<<endl;
		}
	
	}
	return 0;
}
