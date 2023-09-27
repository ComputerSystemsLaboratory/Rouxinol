#include <iostream>
#include <string>
using namespace std;

class Card{
    public:
        string letter;
        int num;
        int priority;
        Card() {
            letter = "";
            num = 0;
            priority = 0;
        }
};

Card cards[100000];

int partition(Card A[], int start, int end)
{
    int threshold = A[end].num;
    //cout << "threshold:" << threshold << endl;
    int i = start - 1;
    for (int j = start; j < end; ++j) {
        if (A[j].num <= threshold) {
            i++;
            swap(A[i], A[j]);
        }
    }
    i++;
    swap(A[i], A[end]);

    //for (int j = start; j <= end; ++j)
    //    cout << A[j].letter << A[j].num << " ";
    //cout << endl;
    return i;
}

void quickSort(Card A[], int start, int end)
{
    if (start < end) {
        int mid = partition(A, start, end);
        //cout << mid << endl;
        quickSort(A, start, mid - 1);
        quickSort(A, mid + 1, end);
    } else {
        return;
    }
}

int main()
{
    int n;

    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> cards[i].letter  >> cards[i].num;
        cards[i].priority = i;
    }

    quickSort(cards, 0, n - 1);

    int flag = 0;
    for (int i = 0; i < n - 1; ++i) {
        if (cards[i].num == cards[i+1].num && cards[i].priority > cards[i+1].priority)
            flag = 1;
    }

    if (flag) {
        cout << "Not stable" << endl;
    } else {
        cout << "Stable" << endl;
    }

    for (int i = 0; i < n; ++i)
        cout << cards[i].letter << " " << cards[i].num << endl;

    return 0;
}