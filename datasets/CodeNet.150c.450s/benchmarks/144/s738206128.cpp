#include <iostream>
#include <stdio.h>
using namespace std;
 
int main(){
	int n,m,l,i,j,k,a[100][100],b[100][100];
	long int c[100][100];
	
	cin >> n >> m >> l;
	
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			a[i][j]=0;
			cin >> a[i][j];
		}
	}
	
	for(j=0;j<m;j++){
		for(k=0;k<l;k++){
			b[j][k]=0;
			cin >> b[j][k];
		}
	}
	
	for(i=0;i<n;i++){
		for(k=0;k<l;k++){
			c[i][k]=0;
		}
	}
	
	for(i=0;i<n;i++){
		for(k=0;k<l;k++){
			for(j=0;j<m;j++){
				c[i][k]=c[i][k]+a[i][j]*b[j][k];
			}
		}
	}

	for(i=0;i<n;i++){
		for(k=0;k<l-1;k++){
			cout << c[i][k] << " ";
		}
		cout << c[i][l-1] << endl;
	}
	
    return 0;
}