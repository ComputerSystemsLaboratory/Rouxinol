#include<iostream>
using namespace std;

int main(){
	int n,r,p[100],c[100],hanafuda[100][100],b;
	while(true){
		cin>>n>>r;
		if(n==0 && r==0){
			break;
		}
		for(int i=1;i<=n;i++){
			hanafuda[i][0]=n-i+1;
		}
		for(int i=1;i<=r;i++){
			
			b=0;
			cin>>p[i]>>c[i];

			for(int j=p[i];j<p[i]+c[i];j++){
				b++;
				hanafuda[b][i]=hanafuda[j][i-1];
			}
			for(int j=1;j<p[i];j++){
				b++;
				hanafuda[b][i]=hanafuda[j][i-1];
			}
			for(int j=p[i]+c[i];j<=n;j++){
				b++;
				hanafuda[b][i]=hanafuda[j][i-1];
			}
		}
		cout<<hanafuda[1][r]<<endl;
	}
	return 0;
}