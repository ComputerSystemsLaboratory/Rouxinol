#include <iostream>
#include <set>
#include <map>
using namespace std;

int main()
{
    int n; cin >> n;

    typedef set<int> Suit;
    typedef map<char,Suit> Deck;

    Deck d;

    char s;
    int card;
    while(n-- && cin >> s >> card)
        d[s].insert(card);

    /*cout << "\nFinished load\n" << endl;
    for(const auto &x : d) {
        for(const auto &y : x.second)
            cout << y << ' ';
        cout << endl;
    }*/

    const char suit_order[] = "SHCD";
    for(int so=0; so<4; ++so) {
        s = suit_order[so];
        Suit &suit = d[s]; // it is ok to create an empty set here
        for(int i=1; i<14; ++i)
            if(suit.find(i) == suit.end())
                cout << s << ' ' << i << '\n';
    }

    return 0;
}

