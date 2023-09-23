#include<iostream>
#include<algorithm>
#define INF 999999
typedef long long ll;
using namespace std;
int n,a,b,c,maxm;
		int sum,miniNo,minim;
int t[100][100];
int main(){
	while(cin>>n,n){
		for(int i=0;i<100;i++)for(int j=0;j<100;j++){
			if(i!=j)t[i][j]=INF;
			else t[i][j]=0;
		}
		maxm=0;
		for(int i=0;i<n;i++){
			cin>>a>>b>>c;
			maxm=max(maxm,max(a,b));
			t[a][b]=c;
			t[b][a]=c;
		}
		maxm++;
		for(int k=0;k<maxm;k++){
			for(int i=0;i<maxm;i++){
				for(int j=0;j<maxm;j++){
					t[i][j]=min(t[i][k]+t[k][j],t[i][j]);
				}
			}
		}
		
		
		minim=INF;
		for(int i=0;i<maxm;i++){
			sum=0;
			for(int j=0;j<maxm;j++)sum+=t[i][j];
			if(minim>sum){
				minim=sum;
				miniNo=i;
			}
		}
		cout<<miniNo<<" "<<minim<<endl;
		
	}
	return 0;
}