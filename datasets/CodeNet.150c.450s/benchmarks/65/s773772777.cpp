#include <vector>
#include <string>
#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <cmath>

using namespace std;

#define FOR(i, start, end) for(int i = (start); i < (end); ++i)
#define REP(i, n) FOR(i, 0, n)


struct Card {
    char suit;
    int value;
    Card(char s, int v) : suit(s), value(v) {}
};

bool operator==(const Card& lhs, const Card& rhs)
{
    return lhs.value == rhs.value && lhs.suit == rhs.suit;
}

bool card_less_value(const Card& lhs, const Card& rhs)
{
    return lhs.value < rhs.value;
}

vector<Card> read_array()
{
    int n;
    scanf("%d", &n);

    vector<Card> v;
    REP(i, n) {
        char suit;
        int value;
        scanf(" %c%d", &suit, &value);
        v.push_back(Card(suit, value));
    }

    return v;
}

void bubble(vector<Card>& v)
{
    for(int jmax = v.size()-1; jmax >= 1; --jmax) {
        for(int j = 1; j <= jmax; ++j) {
            if(card_less_value(v[j], v[j-1]))
                swap(v[j-1], v[j]);
        }
    }
}

void selection(vector<Card>& v)
{
    REP(i, v.size()) {
        int argmin = i;
        FOR(j, i+1, v.size()) {
            if(card_less_value(v[j], v[argmin]))
                argmin = j;
        }
        if(argmin != i)
            swap(v[argmin], v[i]);
    }
}

void print_array(const vector<Card>& v)
{
    REP(i, v.size()) {
        Card c = v[i];
        printf("%c%d%c", c.suit, c.value, i == v.size()-1 ? '\n' : ' ');
    }
}

int main()
{
    vector<Card> v = read_array();
    //print_array(v);

    vector<Card> bubble_v(v);
    vector<Card> selection_v(v);

    bubble(bubble_v);
    selection(selection_v);

    print_array(bubble_v);
    puts("Stable");
    print_array(selection_v);
    puts(bubble_v == selection_v ? "Stable" : "Not stable");

    return 0;
}