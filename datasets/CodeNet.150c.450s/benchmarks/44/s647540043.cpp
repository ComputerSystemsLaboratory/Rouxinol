#include <iostream>
#include <map>
#include <vector>

using namespace std;
#define N 4

int main(void)
{
    ios::sync_with_stdio(false);
    int a[N], b[N];
    int hit, blow;

    while(cin >> a[0] >> a[1] >> a[2] >> a[3], !cin.eof()) {
        for(int i=0; i<N; i++) cin >> b[i];

        hit = blow = 0;
        for(int i=0; i<N; i++) {
            for(int j=0; j<N; j++) {
                if(a[i] == b[j]) {
                    if(i == j) hit++;
                    else blow++;
                }
            }
        }

        cout << hit << " " << blow << endl;
    }

    return 0;
}