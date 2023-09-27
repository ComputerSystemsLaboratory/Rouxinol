#include <bits/stdc++.h>
using namespace std;
int main()
{
int  t,k,n, i, j, m;
int a[10009]={0};
cin>>n;
for(i= 0; i < n; i++){
cin>>t;
a[t]++;
}
k=0;
for(i = 0; i <10009; i++){
if(a[i]!=0){
for(j = 0; j < a[i]; j++){
cout<<i;
k++;
if(k<=n-1) cout<<" ";
}
}
}
cout<<endl;
return 0;
}