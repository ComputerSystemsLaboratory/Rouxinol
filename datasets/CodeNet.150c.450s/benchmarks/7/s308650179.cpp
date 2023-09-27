#include<iostream>
using namespace std;
int main(){
int a=0,b=0,c=0,i,val,tmp_a,tmp_b;
for(i=0;i<10;i++){
cin >> val;
if(val>a){
tmp_a=a;
a=val;
tmp_b = b;
b=tmp_a;
c=tmp_b;
}else if(val>b){
tmp_a = b;
b = val;
c = tmp_a;
}else if(val>c){
c=val;
}
}
cout << a << "\n" << b << "\n" << c << endl;
return 0;
}