#include<iostream>
#include<string>
using namespace std;

int main(){
int n,a[53];
int hantei[53];
char b[53];

for(int i=1;i<53;i++){
hantei[i]=0;
}

cin>>n;

for(int i=1;i<=n;i++){
cin>>b[i]>>a[i];

if(b[i]=='S'){
hantei[0+a[i]]=1;
}

if(b[i]=='H'){
hantei[13+a[i]]=1;
}

if(b[i]=='C'){
hantei[26+a[i]]=1;
}

if(b[i]=='D'){
hantei[39+a[i]]=1;
}

}

for(int i=1;i<53;i++){
if(hantei[i]==0){

if(i<=13){
cout<<"S "<<(i-1)%13+1<<endl;
}

else if(i<=26){
cout<<"H "<<(i-1)%13+1<<endl;
}

else if(i<=39){
cout<<"C "<<(i-1)%13+1<<endl;
}

else if(i<=52){
cout<<"D "<<(i-1)%13+1<<endl;
}

}
}

return 0;
}