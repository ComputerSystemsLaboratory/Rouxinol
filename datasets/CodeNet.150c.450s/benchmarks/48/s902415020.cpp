
#include <iostream>
#include <algorithm>
#include <stdlib.h>
#include <string>
#include <queue>
#include <map>
#include <stack>
using namespace std;
 
int dx[8]={1,-1,0,0,1,1,-1,-1};
int dy[8]={0,0,1,-1,-1,1,-1,1};
 
 
int main() {
int n;
while(cin>>n && n){
int mi=1000000;
for(int z=0;z<101;z++){
if(z*z*z>n) break;
int q=n-z*z*z;
int y=0;
while(y*y<=q) y++;
y--;
int x=q-y*y;
mi=min(mi,x+y+z);
}
cout<<mi<<endl;
}
	return 0;
 
   }