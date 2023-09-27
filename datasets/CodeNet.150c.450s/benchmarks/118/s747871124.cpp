#include <iostream>
#include <algorithm>
#include <stdlib.h>
#include <string>
#include <queue>
using namespace std;
int main(){
int n,y,m,d,ans;
cin>>n;
for(int qe=0;qe<n;qe++){
cin>>y>>m>>d;
ans=0;
int ydai=333-y/3;
y=999-y;
ans=ans+195*y+5*ydai;
if(y%3==0){
ans=ans+200-((m-1)*20+d-1)-1;
}
else{
int md=5-m/2;
ans=ans+20*(10-m)-md+20-d;
if(m%2==0) ans--;

}


cout<<ans+1<<endl;

}


return 0;
}