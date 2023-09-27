#include <iostream>
using namespace std;

int main(){
    int a,b,c,x,z,n=0;
	cin >> a >> b >> c; 
    for (int x = a; x <= b; x++)
    {
    	z = c % x;
    	if ( z == 0 )
    	{
    		n = n + 1;
    	}
    }
    cout << n << endl;
}
    