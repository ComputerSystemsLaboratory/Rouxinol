#include<iostream>
using namespace std;

int main(){
int x  , y;
char op;
 
while(1){
cin >> x >>  op  >> y;
if( op == '?' ) break;

if ( op == '+' ) cout << x + y << endl;
else if ( op == '-' ) cout << x - y << endl;
else if ( op == '*' ) cout << x * y << endl;
else if ( op == '/' ) cout << x / y << endl;
}

return 0 ;
}