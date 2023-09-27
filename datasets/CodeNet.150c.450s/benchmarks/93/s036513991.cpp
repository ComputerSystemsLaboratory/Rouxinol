#include <bits/stdc++.h>
using namespace std;

typedef struct Card
{
    char suit;
    int n;
} Card;

void copyCards(Card a, Card *b)
{
    b->n = a.n;
    b->suit = a.suit;
}

void swapCards(Card *a, Card *b)
{
    Card tmp;
    copyCards(*a, &tmp);
    copyCards(*b, a);
    copyCards(tmp, b);
}

int Partition(Card card[], int p, int r)
{
    int x = card[r].n;
    int i = p - 1;

    for (int j = p; j < r; j++)
    {
        if (card[j].n <= x)
        {
            i++;
            swapCards(&card[i], &card[j]);
        }
    }
    swapCards(&card[i + 1], &card[r]);
    return i + 1;
}

void quickSort(Card card[], int p, int r)
{
    if (p < r)
    {
        int q = Partition(card, p, r);
        quickSort(card, p, q - 1);
        quickSort(card, q + 1, r);
    }
}

void merge(Card card[], int n)
{
    Card l[n / 2 + 1];
    Card r[n - n / 2 + 1];

    for (int i = 0; i < n / 2; i++)
        copyCards(card[i], &l[i]);
    l[n / 2].suit = 'N';
    l[n / 2].n = 1145141919;
    for (int i = 0; i < n - n / 2; i++)
        copyCards(card[n / 2 + i], &r[i]);
    r[n - n / 2].suit = 'N';
    r[n - n / 2].n = 1145141919;

    int i = 0, j = 0;
    for (int k = 0; k < n; k++)
    {
        if (l[i].n <= r[j].n)
        {
            copyCards(l[i], &card[k]);
            i++;
        }
        else
        {
            copyCards(r[j], &card[k]);
            j++;
        }
    }
}

void mergeSort(Card card[], int n)
{
    if (n > 1)
    {
        mergeSort(card, n / 2);
        mergeSort(card + n / 2, n - n / 2);
        merge(card, n);
    }
}

int main()
{
    int n;
    cin >> n;
    Card card[n], mcard[n];
    for (int i = 0; i < n; i++)
        cin >> card[i].suit >> card[i].n;
    for (int i = 0; i < n; i++)
        copyCards(card[i], &mcard[i]);
    quickSort(card, 0, n - 1);
    mergeSort(mcard, n);
    bool f = true;
    for (int i = 0; i < n; i++)
    {
        if (card[i].suit != mcard[i].suit)
        {
            f = !f;
            break;
        }
    }
    if (f)
        cout << "Stable" << endl;
    else
        cout << "Not stable" << endl;
    for (int i = 0; i < n; i++)
        cout << card[i].suit << ' ' << card[i].n << endl;
}
