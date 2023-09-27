#include <iostream>
using namespace std;

int main() {
	while(1){
	int a[17][17]={} ,x ,y ,n ,badpoint ,badpoint1;
	cin>>x>>y>>n;
	if(x==0&&y==0)
	break;
	for(int i=0;i<n;i++){
		cin>>badpoint>>badpoint1;
		a[badpoint][badpoint1]=-1;		
	}
	a[0][1]=1;
	for(int i=1;i<=x;i++){
		for(int j=1;j<=y;j++){
				if(a[i][j]==0)
				a[i][j]=a[i-1][j]+a[i][j-1];
				else
				a[i][j]=0;
			}
		}
		cout<<a[x][y]<<endl;
	}
	return 0;
}