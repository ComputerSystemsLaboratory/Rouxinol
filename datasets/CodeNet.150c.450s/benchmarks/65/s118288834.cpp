#include <iostream>
using namespace std;

static const int MAX_NUM = 36;

typedef struct tagCard
{
    char cSuit;
    int  iNum;
} Card;

void BubbleSort(Card* pCard, int num)
{
    int i, j;
    bool flag;

    for (i = 0; i < num; i++) {
        flag = false;
        for (j = num - 1; j > i; j--) {
            if ((pCard + j)->iNum < (pCard + j - 1)->iNum) {
                swap(*(pCard + j), *(pCard + j - 1));
                flag = true;
            }
        }
        if (flag == false) {
            break;
        }
    }

    return;
}

void SelectSort(Card* pCard, int num)
{
    int i, j;
    int min;

    for (i = 0; i < num; i++) {
        min = i;
        for (j = i + 1; j < num; j++) {
            if ((pCard + min)->iNum > (pCard + j)->iNum) {
                min = j;
            }
        }
        if (min != i) {
            swap(*(pCard + i), *(pCard + min));
        }
    }

    return;
}

bool IsStable(Card* pCard1, Card* pCard2, int num)
{
    int i;
    bool ret = true;

    for (i = 0; i < num; i++) {
        if (pCard1[i].cSuit != pCard2[i].cSuit) {
            ret = false;
        }
    }

    return ret;
}

int main(void)
{
    int  i;
    int  num;
    Card elem1[MAX_NUM];
    Card elem2[MAX_NUM];

    cin >> num;
    for (i = 0; i < num; i++) {
        cin >> elem1[i].cSuit >> elem1[i].iNum;
        elem2[i] = elem1[i];
    }

    BubbleSort(elem1, num);
    SelectSort(elem2, num);

    cout << elem1[0].cSuit << elem1[0].iNum;
    for (i = 1; i < num; i++) {
        cout << " ";
        cout << elem1[i].cSuit << elem1[i].iNum;
    }
    cout << endl;
    cout << "Stable" << endl;

    cout << elem2[0].cSuit << elem2[0].iNum;
    for (i = 1; i < num; i++) {
        cout << " ";
        cout << elem2[i].cSuit << elem2[i].iNum;
    }
    cout << endl;
    if (IsStable(elem1, elem2, num) == true) {
        cout << "Stable" << endl;
    }
    else {
        cout << "Not stable" << endl;
    }


    return 0;
}