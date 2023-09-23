#include<iostream>
using namespace std;
int main(){
int a,b,n,x,y;
while(1){
cin>>a>>b;
if(a==0)break;
int route[a+1][b+1];
cin>>n;
for(int i=1;i<=a;i++){
    for(int j=1;j<=b;j++){
        route[i][j]=0;
    }
}
for(int i=0;i<n;i++){
cin>>x>>y;
route[x][y]=-1;
}

route[1][1]=1;
for(int i=1;i<=a;i++){
for(int j=1;j<=b;j++){
if(route[i][j]==-1){
route[i][j]=0;
}else{
if(i>1) route[i][j]+=route[i-1][j];
if(j>1) route[i][j]+=route[i][j-1];
}



}
}


cout<<route[a][b]<<endl;

}
return 0;
}