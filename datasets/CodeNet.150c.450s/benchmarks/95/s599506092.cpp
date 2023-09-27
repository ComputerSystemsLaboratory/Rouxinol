#include <iostream>
#include <algorithm>
#include <stdlib.h>
#include <string>
#include <queue>
using namespace std;
int main(){
int n,ans,r,l;
string s,t;
while(cin>>n && n>0){
ans=0;
r=0;
l=0;
for(int i=0;i<n/2;i++){
cin>>s>>t;
if((s=="lu"&&t=="ru")||(t=="lu"&& s=="ru")||(s=="ld"&&t=="rd")||(s=="rd"&&t=="ld")) ans++;


}
if(n%2==1) cin>>s;

cout<<ans<<endl;

}



return 0;
}