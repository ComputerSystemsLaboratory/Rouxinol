#include <iostream>

using namespace std;

int main()
{
        int num[5];

        for (int i = 0; i < 5; i++) {
                cin >> num[i];
        }
        for (int i = 0; i < 4; i++) {
                for (int j = 4; j > i; j--) {
                        if (num[j - 1] < num[j]) {
                                int tmp = num[j - 1];
                                num[j - 1] = num[j];
                                num[j] = tmp;
                        }
                }
        }
        for (int i = 0; i < 5; i++) {
                cout << num[i];
                if (i < 4)
                        cout << " ";
        }
        cout << endl;

        return 0;
}