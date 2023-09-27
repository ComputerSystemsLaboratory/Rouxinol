#include <iostream>
 
int kk[100000];
 
int main(){

while(1){

int s=0;
int n,k;
std::cin>>n>>k;
 
if(n==0&&k==0)
break;

for(int i=0;i<k;i++){
std::cin>>kk[i];
s+=kk[i];
}
 
int st=s;
 
for(int i=k;i<n;i++){
std::cin>>kk[i];
s+=kk[i]-kk[i-k];
if(s>st)
st=s;
}
 
std::cout<<st<<std::endl;

}

}
 