#include <cstdio>
#include <istream>
using namespace std;

static const int MAX_NUM = 2000001;

void MakeHeap(int elem[], int *pNum, int target)
{
    int left, right, largest;

    left    = target * 2;
    right   = left + 1;
    largest = target;

    if (right <= *pNum) {
        if (elem[right] > elem[largest]) {
            largest = right;
        }
        if (elem[left] > elem[largest]) {
            largest = left;
        }
    }
    else {
        if (left <= *pNum) {
            if (elem[left] > elem[largest]) {
                largest = left;
            }
        }
    }

    if (largest != target) {
        swap(elem[largest],elem[target]);
        MakeHeap(elem, pNum, largest);
    }

    return;
}

int ExtractMax(int elem[], int *pNum)
{
    int ret = elem[1];
    int now, left, right, target;

    if (*pNum >= 1) {
        swap(elem[1], elem[*pNum]);
        --(*pNum);

        MakeHeap(elem, pNum, 1);
    }
    else {
        ret = -(1 << 30);
    }

    return ret;
}

void Insert(int elem[], int *pNum, int target)
{
    int id;
    int parent;

    ++(*pNum);
    id = *pNum;
    elem[id] = target;

    parent = id / 2;
    while (parent > 0) {
        if (elem[id] > elem[parent]) {
            swap(elem[id], elem[parent]);
            id = parent;
            parent = id / 2;
        }
        else {
            break;
        }
    }

    return;
}

int main(void)
{
    int  elem[MAX_NUM];
    int  num = 0;
    int  key;
    char order[10];

    elem[1] = -1;

    for (;;) {
        scanf("%s", order);
        if (order[0] == 'e') {
            if (order[1] == 'n') {
                break;
            }
            else {
                key = ExtractMax(elem, &num);
                printf("%d\n", key);
            }
        }
        else if (order[0] == 'i') {
            scanf("%d", &key);
            Insert(elem, &num, key);
        }
    }

    return 0;
}