#include<iostream>
using namespace std;

int main()
{
    int n, i, j;
    char c;
    char suit[] = "SHCD";
    int num;
    int cards[52];

    for(i = 0; i < 52; i++) cards[i] = 0;

    cin >> n;
    for(i = 0; i < n; i++){
        cin >> c >> num;
        for(j = 0; j < 4; j++){
            if(c == suit[j]){ cards[num + 13 * j - 1] = 1; break; }
        }
    }

    for(i = 0; i < 52; i++){
        if(cards[i] == 1) continue;
        cout << suit[i / 13] << " " << (i % 13) + 1 << endl;
    }

    return 0;
}