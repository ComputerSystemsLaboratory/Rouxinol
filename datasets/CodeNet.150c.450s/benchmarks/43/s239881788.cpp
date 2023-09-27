#include<iostream>
using namespace std;

int main(){
while(1){
int n;
cin >> n;
if(n == 0)break;
int a=0,b=0,c=0;
for(int i=0;i<n;i++){
int x,y;
cin >> x >> y;
if(x>y)a+=x+y;
else if(x<y)b+=x+y;
else c+=x;
}
cout << a+c << " " << b+c << endl;
}
}