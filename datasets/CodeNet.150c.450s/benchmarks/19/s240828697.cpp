#include <iostream>
using namespace std;

int main(){
int a[100000][4];
int b=0;
for(int i=1;i<100000;i++){
cin>>a[i][0]>>a[i][1];
b++;
if(a[i][0]>a[i][1]){
a[i][3]=a[i][0];
a[i][2]=a[i][1];
}
else{
a[i][2]=a[i][0];
a[i][3]=a[i][1];
}
if(a[i][0]==0 && a[i][1]==0){
goto aa;
}
}
aa:;
for(int i=1;i<b;i++){
cout<<a[i][2]<<" "<<a[i][3]<<endl;
}
return 0;
}