#include<iostream>
#include<stdio.h>

using namespace std;
 
int main()
{
    int n,i,j,k,a[4][3][10];
	int b,f,r,v;
     
    for(j=0;j<4;j++){
        for(i=0;i<3;i++){
			for(k=0;k<10;k++){
				a[j][i][k]=0;
			}
        }
    }
             
    cin>>n;
    for(i=0;i<n;i++){
		cin>>b>>f>>r>>v;
		a[b-1][f-1][r-1]=a[b-1][f-1][r-1]+v;
	}
	
	for(j=0;j<3;j++){
		for(i=0;i<3;i++){
			for(k=0;k<9;k++){
				printf(" %d",a[j][i][k]);
			}
			printf(" %d\n",a[j][i][9]);
		}
		printf("####################\n");
	}
		for(i=0;i<3;i++){
			for(k=0;k<9;k++){
				printf(" %d",a[3][i][k]);
			}
			printf(" %d\n",a[3][i][9]);
		}
				

    return 0;
}