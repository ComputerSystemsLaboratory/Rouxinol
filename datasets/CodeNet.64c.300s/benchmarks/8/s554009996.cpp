#include <iostream>
using namespace std;

void call(int n)
{
    int i = 0;

    while(++i <= n) {

        if(i%3 == 0)
            cout << ' ' << i;
        else {
            int x = i;
            while(x) {
                if(x%10 == 3) {
                    cout << ' ' << i;
                    break;
                } else 
                    x /= 10;
            }
        }
    }
    cout << endl;
}

int main()
{
    int n; cin >> n;

    call(n);

    return 0;
}

