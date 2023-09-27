#include <vector>
#include <string>
#include <algorithm>
#include <numeric>
#include <functional>
#include <iterator>
#include <limits>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <cstdint>
#include <cassert>

using namespace std;

#define FOR(i, start, end) for(int i = (start); i < (end); ++i)
#define REP(i, n) FOR(i, 0, n)

struct Card {
    char suit;
    int num;
    Card(char s, int n) : suit(s), num(n) {}
    bool operator==(const Card& other) const { return suit == other.suit && num == other.num; }
};

void read_problem(vector<Card>& ary)
{
    int n;
    scanf("%d\n", &n);

    ary.reserve(n);
    REP(i, n) {
        char suit;
        int num;
        scanf("%c %d\n", &suit, &num);
        ary.emplace_back(suit, num);
    }
}

int part(vector<Card>& ary, int p, int r)
{
    Card pivot = ary[r];

    int i = p; // pivot ??\??????????´?????????\??????
    FOR(j, p, r) {
        if(ary[j].num <= pivot.num) {
            swap(ary[i], ary[j]);
            ++i;
        }
    }
    swap(ary[i], ary[r]);

    return i;
}

void quicksort(vector<Card>& ary, int p, int r)
{
    if(p < r) {
        int q = part(ary, p, r);
        quicksort(ary, p,   q-1);
        quicksort(ary, q+1, r);
    }
}

void merge(vector<Card>& ary, int start, int mid, int end)
{
    vector<Card> l(ary.begin()+start, ary.begin()+mid);
    vector<Card> r(ary.begin()+mid,   ary.begin()+end);
    int n1 = l.size();
    int n2 = r.size();

    int i = 0;
    int j = 0;
    FOR(k, start, end) {
        if(i == n1) {
            ary[k] = r[j++];
        }
        else if(j == n2) {
            ary[k] = l[i++];
        }
        else if(l[i].num <= r[j].num) {
            ary[k] = l[i++];
        }
        else {
            ary[k] = r[j++];
        }
    }
}

void mergesort(vector<Card>& ary, int start, int end)
{
    if(end - start >= 2) {
        int mid = (start + end) / 2;
        mergesort(ary, start, mid);
        mergesort(ary, mid,   end);
        merge(ary, start, mid, end);
    }
}

int main()
{
    vector<Card> ary;
    read_problem(ary);
    int n = ary.size();

    vector<Card> ary_stable(ary);
    quicksort(ary, 0, n-1);
    mergesort(ary_stable, 0, n);
    bool stable = ary == ary_stable;

    puts(stable ? "Stable" : "Not stable");
    REP(i, n) {
        printf("%c %d\n", ary[i].suit, ary[i].num);
    }

    return 0;
}