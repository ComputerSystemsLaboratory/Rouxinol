//ITP1_6_B
#include<iostream>
using namespace std;

int main()
{
	int n,i,j,a[4][13],k;
	char c;
	
	for(j=0;j<4;j++){
		for(i=0;i<13;i++){
			a[j][i]=0;
			}
		}
			
	cin>>n;
	for(i=0;i<n;i++){
	cin>>c>>k;
	if(c=='S')
		a[0][k-1]=1;
	else if(c=='H')
		a[1][k-1]=1;
	else if(c=='C')
		a[2][k-1]=1;
	else if(c=='D')
		a[3][k-1]=1;
	}
	
	for(j=0;j<4;j++){	
		for(i=0;i<13;i++){
			if(a[j][i]==0){
				if(j==(int)'S'-83)
				cout<<'S'<<" "<<i+1<<endl;
				else if(j==(int)'H'-71)
				cout<<'H'<<" "<<i+1<<endl;
				else if(j==(int)'C'-65)
				cout<<'C'<<" "<<i+1<<endl;
				else if(j==(int)'D'-65)
				cout<<'D'<<" "<<i+1<<endl;
				}
			}
		}
	return 0;
}
			