#include<iostream>
using namespace std;

int main(){
int r,c,T[101][101];
cin >>r >>c;
for(int i=0;i<r;i++){
for(int j=0;j<c;j++){
cin >> T[i][j];
}
}
for(int i=0;i<=r;i++) T[i][c]=0;
for(int j=0;j<=c;j++) T[r][j]=0;
for(int i=0;i<r;i++){
for(int j=0;j<c;j++){
T[i][c]=T[i][c]+T[i][j];
T[r][j]=T[r][j]+T[i][j];
T[r][c]=T[r][c]+T[i][j];
}
}
for(int i=0;i<=r;i++){
for(int j=0;j<=c;j++){
if(j) cout <<" ";
cout <<T[i][j];
}
cout <<endl;
}
return 0;
}