#include<iostream>
using namespace std;
int miti[17][17];
int s[2]={0,-1},t[2]={-1,0},sum=0;

int main(){
int a,b,c,d=1,e,x,y,i;


while(1){
cin >> a >> b;
if(a==0&&b==0)break;
cin >> c;
for(i=0;i<c;i++){
    cin >> x >> y;
    miti[x][y]=-1;
}
for(i=1;i<a+1;i++){
    if(miti[i][1]==-1)d=-1;
    miti[i][1]=d;
}
d=1;


for(i=1;i<b+1;i++){
    if(miti[1][i]==-1)d=-1;
    miti[1][i]=d;
}
d=1;


for(y=2;y<b+1;y++){
    for(x=2;x<a+1;x++){
        if(miti[x][y]==-1){
        }else  {
           if(miti[x-1][y]==-1){
           }else  miti[x][y]=miti[x][y]+miti[x-1][y];
           if(miti[x][y-1]==-1){
           }else  miti[x][y]=miti[x][y]+miti[x][y-1];
        }
    }
}

cout << miti[a][b] << endl;

for(y=1;y<b+1;y++){
    for(x=1;x<a+1;x++){
         miti[x][y]=0;
    }
}

}
return 0;
}