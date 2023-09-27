#include<iostream>
using namespace std;

int main(){
int n,i,x,j,k;
char s;
int cards[4][13];
for(j=0;j<4;j++){
 for(i=0;i<13;i++){
  cards[j][i]=0;
 }
}
cin>>n;
for(i=0;i<n;i++){
cin>>s>>x;
if (s=='S'){
cards[0][x-1]=1;}
else if (s=='H'){
cards[1][x-1]=1;}
else if (s=='C'){
cards[2][x-1]=1;}
else if (s=='D'){
cards[3][x-1]=1;}
}

for(j=0;j<4;j++){
 for(i=0;i<13;i++){
  if(cards[j][i]==0){
    if(j==0)
     {cout<<"S"<<" "<<i+1<<endl;}
    else if(j==1)
     {cout<<"H"<<" "<<i+1<<endl;}
    else if(j==2)
     {cout<<"C"<<" "<<i+1<<endl;}
    else if(j==3)
     {cout<<"D"<<" "<<i+1<<endl;}
 }}
}

    return 0;
}