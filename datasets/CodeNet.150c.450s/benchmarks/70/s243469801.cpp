#include<iostream>
using namespace std;
int main(){
int m,d,h,y;
char w[][7]={"Satur","Sun","Mon","Tues","Wednes","Thurs","Fri"};
for(;;){
y=4;
cin>>m>>d;
if(m==0)break;
if(m<3){m+=12;y--;}
h=(y+int(y/4)+int(2.6*(m+1))+d)%7;
cout<<w[h]<<"day"<<endl;
}
return 0;
}