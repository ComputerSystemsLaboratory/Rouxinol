#include<iostream>
#include<cstdio>

using namespace std;
static const int N = 100;

struct Card { char suit, value; };

void inputArray(int a[], int n){
    for (int i = 0; i < n; ++i) scanf("%d", &a[i]);
}

void printArray(struct Card a[], int n){
    int k = 0;
    while(1){
        if(k==n-1) break;
        else{
            printf("%c%c ", a[k].suit, a[k].value);
        }
        k++;
    }
    printf("%c%c\n", a[n-1].suit, a[n-1].value);
}

void selectionSort(struct Card a[], int n){
    int minj;
    Card t;
    for (int i = 0; i < n; ++i)
    {
        minj = i;
        for (int j = i; j < n; ++j)
        {
            if(a[j].value < a[minj].value){
                minj = j;
            }
        }
        if (i!=minj)
        {
            t = a[i]; a[i] = a[minj]; a[minj] = t;
        }
    }
}

void bubbleSort(struct Card a[], int n){
    int flag = 1;
    Card t;
    while(flag){
        flag = 0;
        for (int j = n-1; j >= 1; j--)
        {
            if (a[j].value<a[j-1].value){
                t = a[j-1];
                a[j-1] = a[j];
                a[j] = t;
                flag = 1;
            }
        }
    }
}

bool isStable(struct Card C1[], struct Card C2[], int n){
    for (int i = 0; i < n; ++i)
    {
        if(C1[i].suit != C2[i].suit) return false;
    }
    return true;
}

int main(int argc, char const *argv[])
{
    Card C1[N], C2[N];
    int N;
    char ch;

    cin >> N;
    for (int i = 0; i < N; ++i)
    {
        cin >> C1[i].suit >> C1[i].value;
    }

    for (int i = 0; i < N; ++i)
    {
        C2[i] = C1[i];
    }

    bubbleSort(C1,N);
    selectionSort(C2,N);

    printArray(C1,N);
    cout << "Stable" << endl;

    printArray(C2,N);
    if (isStable(C1, C2, N))
    {
        cout << "Stable" << endl;
    }
    else{
        cout << "Not stable" << endl;
    }

    return 0;
}