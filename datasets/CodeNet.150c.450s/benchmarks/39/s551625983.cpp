#include <iostream>
using namespace std;
int main(){
int a,b;
cin >> a >> b;
if(1>a||100<b) return 0;
cout << a*b << " " << a*2+b*2 << endl;
return 0;
}