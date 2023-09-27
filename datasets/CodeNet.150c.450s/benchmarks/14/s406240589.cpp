#include <iostream>

using namespace std;

int main()
{
    int n, x;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        x = i;
        if (x % 3 == 0) {
            cout << " " << i;
        }
        else if (x % 10 == 3) {
            cout << " " << i;
        }
        else{
            x /= 10;
            while (x) {
                if (x % 10 == 3){
                    cout << " " << i;
                    break;
                }
                x /= 10;
            }
            
        }
    }
    cout << endl;
}