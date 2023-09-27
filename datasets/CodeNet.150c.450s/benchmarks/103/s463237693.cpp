#include <iostream>

using namespace std;

int rec(int n, int s, int over) 
{
    if (s < 0 || n < 0)
        return 0;
    if (!n && !s)
        return 1;
    
    int count = 0;
    for (int i = over + 1; i < 10; i++) 
        count += rec(n - 1, s - i, i);

    return count;
}

int main()
{
    int n, s;

    while (true) {
        cin >> n >> s;
        if (!n && !s)
            break;

        cout << rec(n, s, -1) << endl;
    }

    return 0;
}