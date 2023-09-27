#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#define ini 0
using namespace std;

int rlay[100001];

int main (){

while (1){

memset(rlay ,0 ,sizeof(rlay));
int n,k,input,ansmax=0;
cin>>n>>k;
if (n==0 && k==0)break;

rlay[0]=ini;
for (int i=1;i<=n;i++){
        cin>>input;
        rlay[i]=input+rlay[i-1];
}

for (int i=n;i-k>0;i--){
        ansmax = max ( rlay[i]-rlay[i-k] ,ansmax );
}

cout<<ansmax<<endl;
}

return 0;
}

