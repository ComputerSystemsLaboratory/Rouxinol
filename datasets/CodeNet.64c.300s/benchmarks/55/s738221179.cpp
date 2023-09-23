#include <iostream>
using namespace std;

int main()
{
    int l, i = 0, buf[10000], cnt = 1;
    while (cin >> l) {
        buf[i++] = l;
    }
    for (int j = 0; j < i; j++) {
        int num = buf[j];
        if (num == 0)
            continue;
        cout << "Case " << cnt++ << ": " << num << endl;
    }
    return 0;
}

