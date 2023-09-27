#include <iostream>
#include <algorithm>
#include <stdlib.h>
#include <string>
#include <queue>
using namespace std;
int main(){
int n,ans;
while(cin>>n && n>0){
ans=0;
for(int i=2;i<n;i++){
if(i%2==0){
if((2*n)%i==0 && n%i!=0 && n/i-i/2>=0 ) ans++;
}
else {
if(n%i==0 && n/i>i/2) ans++;

}


}
cout<<ans<<endl;

}



return 0;
}