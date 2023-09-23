#include<iostream>
#include<cmath>
using namespace std;

int main(){
int e,x,y,z,min;

while(1){
cin >> e;
if(e == 0)break;
min = e;
for(z=0;z*z*z<=e;z++){
y=(int)sqrt((double)(e-z*z*z));
x = e-z*z*z-y*y;

min = (min > x+y+z)?x+y+z:min;
}

cout << min << endl;
}
return 0;
}