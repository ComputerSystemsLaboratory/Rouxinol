#include <iostream>
using namespace std;
int main (){
while (1){
int map[17][17]={0},a,b,n,an,bn;
cin>>a>>b;
if (a==0&&b==0)break;
cin>>n;
for (int i=0;i<n;i++){
        cin>>an>>bn;
        map[bn][an]=-1;
}

map[1][1]=1;

for (int i=1;i<=b;i++){
        for (int j=1;j<=a;j++){

                if (map[i][j]!=-1){

                        if (map[i+1][j]!=-1&&i+1<=b){
                                map[i+1][j]+=map[i][j];
                        }
                        if (map[i][j+1]!=-1&&j+1<=a){
                                map[i][j+1]+=map[i][j];
                        }
                }
        }
}

cout<<map[b][a]<<endl;
}
return 0;
}

