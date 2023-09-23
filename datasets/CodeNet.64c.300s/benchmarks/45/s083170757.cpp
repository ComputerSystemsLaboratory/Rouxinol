#include <iostream>
#include <algorithm>
#include <stdlib.h>
#include <string>
#include <queue>
using namespace std;

int main(){
int n,m,p;
while(cin>>n>>m>>p && n!=0){
int a[104]={0};
int sum=0;
for(int i=1;i<n+1;i++){
cin>>a[i];
sum=sum+a[i];
}
int ans=sum*(100-p);
if(a[m]==0) ans=0;
else ans=ans/a[m];
cout<<ans<<endl;

}



return 0;
}