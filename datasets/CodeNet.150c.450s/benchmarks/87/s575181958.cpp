#include<iostream>
using namespace std;
int main(){
while(1){
int h;
cin>>h;
if(h==0)
break;
int x[h][5];
for(int i=0;i<h;i++){
for(int j=0;j<5;j++){
cin>>x[i][j];
}
}
int sum=0;
while(1){
int flag=0;

for(int i=0;i<h;i++){
if(x[i][0]==x[i][1]&&x[i][1]==x[i][2]&&x[i][2]==x[i][3]&&x[i][3]==x[i][4]&&x[i][0]!=0){
flag=1;
sum+=x[i][0]*5;
x[i][0]=0;
x[i][1]=0;
x[i][2]=0;
x[i][3]=0;
x[i][4]=0;
}
else if(x[i][0]==x[i][1]&&x[i][1]==x[i][2]&&x[i][2]==x[i][3]&&x[i][0]!=0){
flag=1;
sum+=x[i][0]*4;
x[i][0]=0;
x[i][1]=0;
x[i][2]=0;
x[i][3]=0;
}
else if(x[i][3]==x[i][4]&&x[i][1]==x[i][2]&&x[i][2]==x[i][3]&&x[i][3]!=0){
flag=1;
sum+=x[i][1]*4;
x[i][4]=0;
x[i][1]=0;
x[i][2]=0;
x[i][3]=0;
}
else if(x[i][0]==x[i][1]&&x[i][1]==x[i][2]&&x[i][0]!=0){
flag=1;
sum+=x[i][0]*3;
x[i][0]=0;
x[i][1]=0;
x[i][2]=0;
}else if(x[i][2]==x[i][3]&&x[i][1]==x[i][2]&&x[i][1]!=0){
flag=1;
sum+=x[i][1]*3;
x[i][3]=0;
x[i][1]=0;
x[i][2]=0;
}else if(x[i][2]==x[i][3]&&x[i][3]==x[i][4]&&x[i][4]!=0){
flag=1;
sum+=x[i][2]*3;
x[i][3]=0;
x[i][4]=0;
x[i][2]=0;
}

}

if(flag==0)break;

int x1[h];
int x2[h];
int x3[h];
int x4[h];
int x5[h];
int len1=0;
int len2=0;
int len3=0;
int len4=0;
int len5=0;
for(int i=h-1;i>=0;i--){
if(x[i][0]!=0){
x1[len1]=x[i][0];
len1++;
}
if(x[i][1]!=0){
x2[len2]=x[i][1];
len2++;
}
if(x[i][2]!=0){
x3[len3]=x[i][2];
len3++;
}
if(x[i][3]!=0){
x4[len4]=x[i][3];
len4++;
}
if(x[i][4]!=0){
x5[len5]=x[i][4];
len5++;
}
}
for(int j=len1;j<h;j++){
x1[j]=0;
}
for(int j=len2;j<h;j++){
x2[j]=0;
}
for(int j=len3;j<h;j++){
x3[j]=0;
}
for(int j=len4;j<h;j++){
x4[j]=0;
}
for(int j=len5;j<h;j++){
x5[j]=0;
}
for(int i=0;i<h;i++){
x[i][0]=x1[h-i-1];
x[i][1]=x2[h-i-1];
x[i][2]=x3[h-i-1];
x[i][3]=x4[h-i-1];
x[i][4]=x5[h-i-1];
}
}
cout<<sum<<endl;
}
return 0;
}
