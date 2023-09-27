#include <iostream>

using namespace std;

void call(int n);

int main()
{ 
    int n;
  
    do {
        cin >> n;
    } while (n < 3 || n > 10000);

    call(n);

    return (0);
}

void call(int n)
{
     int i = 1;
     int x;

     while (++i <= n) {
            x = i;
 
            if (x % 3 == 0) {
                cout << " " << i;	                    
            } else { 
	        while (x != 0) {                
                       if (x % 10 == 3) {
                           cout << " " << i;
                           break;
                       }

                       x /= 10;
                }
            }
     }

     cout << endl;
}