#include<iostream>
#include<cstring>
using namespace std;

int main(){
int Ans[500][1000];
int n[100000],x[100000];
int c=0;
memset(Ans,0,sizeof(Ans));
for(int i=3;i<=100;i++){
for(int j=3;j<=i;j++){
for(int k=2;k<j;k++){
for(int l=1;l<k;l++){
Ans[i][j+k+l]++;
}
}
}
}
for(int i=1;i<=100000;i++){
cin>>n[i]>>x[i];
if(x[i]==0 && n[i]==0){
goto Exit;
}
c++;
}
Exit:
for(int i=1;i<=c;i++){
cout<<Ans[n[i]][x[i]]<<endl;
}
return 0;
}