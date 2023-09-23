#include <iostream>
using namespace std;


int main(){

int a,b,c,d,n,count;

while(cin >> n){
for(a=0;a<10;a++)
for(b=0;b<10;b++)
for(c=0;c<10;c++)
for(d=0;d<10;d++){
if(a+b+c+d==n)count++;
}
cout << count << endl;
a=0;b=0;c=0;d=0;count=0;
}
}