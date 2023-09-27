#include <iostream>
using namespace std;

int suitIndex(char c)
{ return "00230001000000000000000000"[c-'A'] - '0'; }

int main()
{
    int n; cin >> n;
    bool cards[52] = {0};

    char s;
    int card;
    while(n-- && cin >> s >> card)
        cards[suitIndex(s)*13 + card-1] = true;

    for(card=0; card<52; ++card)
        if(!cards[card]) 
            cout << "SHCD"[card/13] << ' ' << card%13+1 << '\n';

    return 0;
}


