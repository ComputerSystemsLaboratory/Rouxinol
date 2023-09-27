#include <iostream>
using namespace std;
int main(){
	int h;
	while(cin>>h){
		if(h==0) break;
		int a[h][5];
		for(int i=0;i<h;i++){
			for(int j=0;j<5;j++){
				cin>>a[i][j];
			}
		}
		int now,ct=0,tp=0,p=1;
		while(p>0){
			p=0;
			for(int i=0;i<h;i++){
				ct=0;
				now=0;
				for(int j=0;j<5;j++){
					if(a[i][j]==now){
						ct++;
					}
					else if(a[i][j]!=now&&ct>=2){
						for(int k=0;k<j;k++){
							if(a[i][k]==now){
								a[i][k]=0;
								p=p+now;
							}
						}
						now=a[i][j];
						ct=0;
					}
					else{
						ct=0;
						now=a[i][j];
					}
				}
				if(ct>=2){
					for(int j=4-ct;j<=4;j++){
						a[i][j]=0;
						p=p+now;
					}
				}
			}
			tp=tp+p;
			for(int i=0;i<=h-1;i++){
				for(int j=0;j<5;j++){
					if(a[i][j]==0){
						for(int k=i-1;k>=0;k--){
							a[k+1][j]=a[k][j];
						}
						a[0][j]=0;
					}
				}
			}
		}
		cout<<tp<<endl;
	}
    return 0;
}