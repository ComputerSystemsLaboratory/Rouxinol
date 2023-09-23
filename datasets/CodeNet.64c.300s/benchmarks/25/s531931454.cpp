#include<bits/stdc++.h>
using namespace std;
int main(void){
	int a[4],b[4],flg[4];
	int i,j;
	int hit,blow;
	
	while(1){
		cin>>a[0];
		if(cin.eof()==1)	break;
		for(i=1;i<4;i++){
			cin>>a[i];
			flg[i]=0;
		}
		for(i=0;i<4;i++)	cin>>b[i];
		hit=0;
		blow=0;
		for(i=0;i<4;i++){
			if(a[i]==b[i]){
				hit++;
				flg[i]=1;
			}
		}
		for(i=0;i<4;i++){
			for(j=0;j<4;j++){
				if(i!=j||flg[j]==0){
					if(a[i]==b[j])	blow++;
				}
			}
		}
		cout<<hit<<" "<<blow<<endl;
	}
	return 0;
}
