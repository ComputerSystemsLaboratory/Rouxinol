#include<iostream>
#include<stdio.h>

using namespace std;

int amida[31][31] = { 0 };

int main(){

    int W, n;

    cin >> W;
    for (int vertical = 1; vertical <= W; vertical++){
        amida[vertical][0] = vertical;
    }

    cin >> n;
    for (int horizonal = 1; horizonal <= n; horizonal++){
        int a, b;
        scanf("%d,%d", &a, &b);

        for (int i = 1; i <= W; i++){
            if (i == a){
                amida[i][horizonal] = amida[b][horizonal - 1];
            }
            else if (i==b)
            {
                amida[i][horizonal] = amida[a][horizonal - 1];
            }
            else
            {
                amida[i][horizonal] = amida[i][horizonal - 1];
            }
        }
    }

    for (int i = 1; i <= W;i++){
        cout << amida[i][n] << endl;
    }

    return 0;
}