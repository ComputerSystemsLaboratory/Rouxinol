#include <iostream>
#include <cstdio>
#include <map>
#include <array>

using namespace std;

int main()
{
    map<char, array<bool,13> > in_posession = {{'S', {}}, {'H', {}}, {'C', {}}, {'D', {}}};
    int n;

    scanf("%d\n", &n);
    for (int i = 0; i < n; i++) {
        char suit;
        int rank;

        scanf("%c %d\n", &suit, &rank);
        in_posession[suit][rank-1] = true;
    }

    for (char suit : { 'S', 'H', 'C', 'D' })
        for (int i = 0; i < 13; i++)
            if (!in_posession[suit][i])
                cout << suit << ' ' << i+1 << endl;
}