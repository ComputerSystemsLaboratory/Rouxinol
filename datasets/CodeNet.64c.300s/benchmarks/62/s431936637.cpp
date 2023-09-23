//ITP1_6_D
#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int m,n,i,j,c=0,s;
	
	cin>>n>>m;

	int A[101][101];
	int b[101];
	
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			cin>>s;
			A[i][j]=s;
			}
		}
	
	for(i=0;i<m;i++){
		cin>>s;
		b[i]=s;
		}
	
	for(i=0;i<n;i++,c=0){
		for(j=0;j<m;j++){
			c+=(A[i][j])*(b[j]);
			}
		cout<<c;
		cout<<endl;
		}
	return 0;
}