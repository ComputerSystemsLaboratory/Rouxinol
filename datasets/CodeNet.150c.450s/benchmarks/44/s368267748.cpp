#include <iostream>

using namespace std;

int main()
{
        const int MAX = 4;
        int a[MAX], b[MAX];

        while (true) {
                for (int i = 0; i < MAX; i++) {
                        if (!(cin >> a[i])){
                                return 0;
                        }
                }
                for (int i = 0; i < MAX; i++) {
                        cin >> b[i];
                }
                int hit = 0, blow = 0;
                for (int i = 0; i < MAX; i++) {
                        if (a[i] == b[i]) {
                                hit++;
                        }
                        for (int j = 0; j < MAX; j++) {
                                if (i != j && a[i] == b[j]) {
                                        blow++;
                                }
                        }
                }
                cout << hit << " " << blow << endl;
        }

        return 0;
}