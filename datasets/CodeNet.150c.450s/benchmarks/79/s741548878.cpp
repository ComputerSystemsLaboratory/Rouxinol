#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, r;
    while (cin >> n >> r, n | r)
    {
        vector<int> deck(n);
        for (int i = 1; i <= n; ++i)
        {
            deck[n - i] = i;
        }
        for (int i = 0; i < r; ++i)
        {
            int p, c;
            cin >> p >> c;

            vector<int> buf(deck.begin(), deck.begin() + p - 1);
            copy(deck.begin() + p - 1, (deck.begin() + p - 1) + c, deck.begin());
            copy(buf.begin(), buf.end(), deck.begin() + c);
        }
        cout << deck[0] << endl;
    }
    return 0;
}