#include <iostream>
#include <iomanip>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int a = 1; a <= n; ++a) {
        int x = a;
        if(x % 3 == 0){
            cout << " " << a;
        }else{

            while(1){
                if( x % 10 == 3){
                    cout << " " << a;
                    break;
                }
                x /= 10;
                if(!x){
                    break;
                }
            }
        }
    }
    cout << endl;
    return 0;
}