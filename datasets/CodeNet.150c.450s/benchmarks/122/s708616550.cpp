#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
#define MAX 2000000
#define INFTY (1<<30)
int H, A[MAX+1];

void maxHeapify(int i)
{
    int left = i * 2,
        right = i * 2 + 1,
        largest;
    if ( left <= H && A[left] > A[i] ) largest = left;
    else largest = i;
    if ( right <= H && A[right] > A[largest] ) largest = right;

    if ( largest != i ) {
        swap(A[i], A[largest]);
        maxHeapify(largest);
    }
}

void increaseKey(int i, int key)
{
    if ( key < A[i] ) return;
    A[i] = key;
    while ( i > 1 && A[i / 2] < A[i] ) {
        swap(A[i], A[i / 2]); // i / 2 is the parent of i.
        i /= 2;
    }
}

int Extract()
{
    int maxv;
    if ( H < 1 ) return -INFTY; // return a infinity which is an error when the size of heap is smaller than 1.
    maxv = A[1];
    A[1] = A[H--];
    maxHeapify(1);
    return maxv;
}
void Insert(int k)
{
    H++;
    A[H] = -INFTY;
    increaseKey(H, k);
}
int main(void)
{
    char command[10];
    int k;
    while ( 1 ) {
        scanf("%s", command);
        if (command[0] == 'e' && command[1] == 'n') break;
        if (command[0] == 'i' ) {
            scanf("%d", &k);
            Insert(k);
        } else {
            printf("%d\n", Extract());
        }
    }
    return 0;
}

