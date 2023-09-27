#include<iostream>
#include<stdio.h>

using namespace std;
 
int main()
{
	int n,m,i,j,d[100][100],e[100],a[100];
	
	cin >> n >> m;
	
	for(i=0;i<n;i++){
		a[i]=0;
	}
	
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			cin >> d[i][j];
		}
	}
	
	for(j=0;j<m;j++){
		cin >> e[j];
	}
	
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			a[i]=a[i]+d[i][j]*e[j];
		}
	}
	
	for(i=0;i<n;i++){
		cout << a[i] << endl;
	}

    return 0;
}