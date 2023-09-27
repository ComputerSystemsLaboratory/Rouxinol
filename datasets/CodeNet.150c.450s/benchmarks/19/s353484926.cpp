#include <iostream>
   
using namespace std;
   
int main(){
int x;
int y;
cin >> x >> y;
while(x || y)
{
if( x > y){
int tmp = x;
x = y;
y = tmp;
}
cout << x << " " << y << endl;
cin >> x >> y;
}
return 0;
}
