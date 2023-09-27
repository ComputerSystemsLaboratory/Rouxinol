#include <iostream>
using namespace std;

int main(void)
{
    int w, n;
    char c;
    int data[30][2];
    cin >> w >> n;
    for (int i = 0; i < n; ++i)
        cin >> data[i][0] >> c >>  data[i][1];

    for (int i = 1; i <= w; ++i) {
        int num = i;
        for (int j = n - 1; 0 <= j; --j) {
            if (data[j][0] == num)
                num = data[j][1];
            else if (data[j][1] == num)
                num = data[j][0];
        }
        cout << num << endl;
    }

    return 0;
}
