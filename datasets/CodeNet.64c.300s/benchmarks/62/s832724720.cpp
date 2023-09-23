#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
    int i,j,n,m;
    int a[100][100];
    int b[100];
    int c[100];

    cin >> n >> m;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(j==0){
                scanf("%d",&a[i][j]);
            }else{
                scanf(" %d",&a[i][j]);
            }
        }
    }
    for(j=0;j<m;j++) cin >> b[j];

    for(i=0;i<n;i++){
        for(j=0;j<m;j++) c[i] += a[i][j] * b[j];
    }

    for(i=0;i<n;i++) cout << c[i] << endl;;

    return 0;
}
