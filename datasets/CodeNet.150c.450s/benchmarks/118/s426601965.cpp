#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int y, m, d;
        cin >> y >> m >> d;
        int count = 0;
        if (y%3==0) {
            count += 20 - d + 1;
            count += ((10 - m) / 2) * (20 + 20) + ((10 - m) % 2) * 20;
        } else {
            count += 19 - d + (m%2) + 1;
            count += ((10 - m) / 2) * (19 + 20) + ((10 - m) % 2) * 19;
        }
        count += ((999 - y) / 3) * (59*10) + ((999 - y) % 3 % 2) * (20*10);
        if ((999 - y) % 3 == 2) {
            count += 19*5 + 20*15;
        }
        cout << count << endl;
    }
    return 0;
}