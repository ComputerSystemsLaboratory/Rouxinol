#include <iostream>
using namespace std;
int main()
{
	int a,b,x,y,i;
	char op;
	for ( ; ; i++ )
{
		cin >> a >> op >> b;
		if ( op == '+' ){
			x = a + b;
            cout << x << endl; 
    }
        else if ( op == '-' ){
            x = a - b;
            cout << x << endl;  
    }
        else if ( op == '*' ){
        	x = a * b;
        	cout << x << endl;
    }
        else if ( op == '/' ){
        	x = a / b;
        	cout << x << endl;
    }
    if ( op == '?' )  break;{

    }
    }
    return 0;
}    