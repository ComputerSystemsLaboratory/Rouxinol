#include <iostream>
using namespace std;
  
int main()
{
    int n=0;
    cin >> n;
    int y = 0;
    for (int i = 1; i <= n; i++)
    {
        int x = i;
        if (x % 3 == 0)//i???3??????????°???????¨???i?????????
        {
            cout << ' ' <<i;
            continue;
        }
        while (x) {
            if (x % 10 == 3)
            {
                cout << ' ' << i;
                break;
            }
            x /= 10;
        }
    }
	cout << endl;
    return 0;
}