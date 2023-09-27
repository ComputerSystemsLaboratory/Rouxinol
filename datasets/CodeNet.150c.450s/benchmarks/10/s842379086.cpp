#include<bits/stdc++.h>
using namespace std;
 
int main(){
	int a[4][3][10];
	for(int h=0;h<4;h++){
			for(int i=0;i<3;i++){
				for(int j=0;j<10;j++){
					a[h][i][j]=0;
				}
			}	
		}
	int b;
	cin>>b;
	for(int c=0;c<b;c++){
		int d,e,f,g;
		cin>>d>>e>>f>>g;
		d--;e--;f--;
		a[d][e][f]+=g;
		}
		for(int h=0;;h++){
			for(int i=0;i<3;i++){
				for(int j=0;j<10;j++){
					cout<<" "<<a[h][i][j];
					}
					cout<<endl;
				}
				if(h==3)break;
	        		cout<<"####################"<<endl; 
			}	
}