#include <iostream>
using namespace std;

int main(void) {
    int N, X, cnt;

    while(true) {
        cin >> N >> X;
        if(N == 0 && X == 0) break;

        cnt = 0;
        for(int i=1; i <= N; i++)
            for(int j=i+1; j <= N; j++)
                for(int k=j+1; k <= N; k++)
                    if((i + j + k) == X) cnt++;

        cout << cnt << endl;
    }

    return 0;
}