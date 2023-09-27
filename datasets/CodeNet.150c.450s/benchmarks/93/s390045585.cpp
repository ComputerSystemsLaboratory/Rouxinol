#include <iostream>
#include <utility>
#include <vector>

using namespace std;

class Card
{
public:
    char suit;
    int number;

    Card() {}
    Card(const Card& card) {
        this->suit = card.suit;
        this->number = card.number;
    }
};

void quick_sort(vector<Card*>& cards, int start, int end);
void merge_sort(vector<Card*>& cards, int start, int end);
void merge(vector<Card*>& cards, int start, int end, int mid);

int main()
{
    int n;
    cin >> n;

    vector<Card*> cards(n);
    for (int i = 0; i < n; ++i) {
        cards[i] = new Card();
        cin >> cards[i]->suit >> cards[i]->number;
    }

    vector<Card*> cards2(n);
    for (int i = 0; i < n; ++i)
        cards2[i] = new Card(*cards[i]);

    quick_sort(cards, 0, cards.size() - 1);
    merge_sort(cards2, 0, cards2.size() - 1);

    bool stable = true;
    for (int i = 0; i < n; ++i) {
        if ((cards[i]->suit != cards2[i]->suit) || (cards[i]->number != cards2[i]->number)) {
            stable = false;
            break;
        }
    }

    if (stable)
        cout << "Stable\n";
    else
        cout << "Not stable\n";

    for (int i = 0; i < n; ++i)
        cout << cards[i]->suit << ' ' << cards[i]->number << '\n';
}

int partition(vector<Card*>& cards, int start, int end)
{
    int pivot = cards[end]->number;
    int div = start - 1;

    for (int i = start; i < end; ++i) {
        if (cards[i]->number <= pivot) {
            ++div;
            swap(cards[i], cards[div]);
        }
    }

    ++div;
    swap(cards[div], cards[end]);

    return div;
}

void quick_sort(vector<Card*>& cards, int start, int end)
{
    if (start < end) {
        int pivot = partition(cards, start, end);
        quick_sort(cards, start, pivot - 1);
        quick_sort(cards, pivot + 1, end);
    }
}

void merge_sort(vector<Card*>& cards, int start, int end)
{
    if (start < end) {
        int mid = (start + end) / 2;
        merge_sort(cards, start, mid);
        merge_sort(cards, mid + 1, end);
        merge(cards, start, end, mid);
    }
}

void merge(vector<Card*>& cards, int start, int end, int mid)
{
    vector<Card*> v1(mid - start + 1);
    vector<Card*> v2(end - (mid + 1) + 1);
    int size1 = v1.size();
    int size2 = v2.size();

    for (int i = 0; i < size1; ++i)
        v1[i] = cards[start + i];

    for (int i = 0; i < size2; ++i)
        v2[i] = cards[mid + 1 + i];

    int idx1 = 0;
    int idx2 = 0;
    int i = start;

    while ((idx1 < size1) && (idx2 < size2)) {
        if (v1[idx1]->number <= v2[idx2]->number) {
            cards[i] = v1[idx1];
            ++idx1;
            ++i;
        } else {
            cards[i] = v2[idx2];
            ++idx2;
            ++i;
        }
    }

    while (idx1 < size1) {
        cards[i] = v1[idx1];
        ++idx1;
        ++i;
    }

    while (idx2 < size2) {
        cards[i] = v2[idx2];
        ++idx2;
        ++i;
    }
}

