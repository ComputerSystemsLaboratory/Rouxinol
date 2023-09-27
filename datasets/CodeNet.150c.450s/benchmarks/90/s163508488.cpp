#include <iostream>

using namespace std;

int main()
{
        const int MAX = 101;
        int num[MAX];
        for (int i = 1; i < MAX; i++) {
                num[i] = 0;
        }
        int a;
        while (cin >> a) {
                num[a]++;
        }
        int cnt = 0, max = 0;
        int mode[100];
        for (int i = 1; i < MAX; i++) {
                max = (max < num[i]) ? num[i] : max;
        }
        for (int i = 1; i < MAX; i++) {
                if (num[i] == max) {
                        mode[cnt++] = i;
                }
        }
        for (int i = 0; i < cnt; i++) {
                cout << mode[i] << endl;
        }

        return 0;
}