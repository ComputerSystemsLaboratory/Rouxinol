#include<bits/stdc++.h>
using namespace std;
void pf(int n){
for(int i=2;i<=sqrt(n);i++){
if(n%i==0){
printf(" %d",i);
pf(n/i);
return;
}
}
printf(" %d\n",n);
}
int main(){
int n;
scanf("%d",&n);
printf("%d:",n);
pf(n);
}