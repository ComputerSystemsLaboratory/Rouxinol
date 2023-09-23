#include<iostream>
using namespace std;
int main(){
int student[30],i,j,num;
for(i=0;i<30;i++){
student[i]=i+1;
}
for(j=0;j<28;j++){
cin>>num;
student[num-1]=0;
}
for(i=0;i<30;i++){
if(student[i]!=0)cout<<student[i]<<endl;
}
return 0;
}