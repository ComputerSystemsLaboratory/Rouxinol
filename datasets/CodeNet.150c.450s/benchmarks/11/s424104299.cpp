#include <stdio.h>
#include <iostream>
#include <map>

using namespace std;

int main()
{
    bool S[13] = {}, H[13] = {}, C[13] = {}, D[13] = {};
    map<char, bool*> bits_of = { { 'S', S }, { 'H', H }, { 'C', C }, { 'D', D } };
    int n;

    scanf("%d\n", &n);

    for (int i = 0; i < n; i++) {
        char suit;
        int rank;

        scanf("%c %d\n", &suit, &rank);
        bits_of[suit][rank-1] = true;
    }

    for (char suit : { 'S', 'H', 'C', 'D' })
        for (auto i = 0; i < 13; i++)
            if (!bits_of[suit][i])
                cout << suit << ' ' << i+1 << endl;
}