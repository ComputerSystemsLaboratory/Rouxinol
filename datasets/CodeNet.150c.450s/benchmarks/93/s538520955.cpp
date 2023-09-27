#include <iostream>
#include <algorithm>
#include <string>
#include <fstream>
#include <vector>
#include <cstdio>
#include <cmath>
#include <queue>
#include <stack>
#include <cmath>
#include <cstdlib>
#include <cstring>
#include <string>
#include <set>
#include <map>
using namespace std;
typedef long long ll;

// #define DEBUG

struct card;
int paritition(card a[], int left, int right);

struct card
{
    char surt;
    int value;
};

void printcard(int n, card a[])
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i].surt << " " << a[i].value << endl;
    }
    
}

int paritition(card a[], int left, int right)
{
    int x = a[right].value;

    int i = left - 1;
    for (int j = left; j < right; j++)
    {
        if (a[j].value <= x)
        {
            i++;
            swap(a[i], a[j]);
        }
    }
    swap(a[i + 1], a[right]);
    return i + 1;
}

void quicksort(card a[], int left, int right)
{
    if (left < right)
    {
        int q = paritition(a, left, right);
        quicksort(a, left, q - 1);
        quicksort(a, q + 1, right);
    }
}

void merge(card a[], int left, int right, int middle)
{
    int const inf = 1e9 + 7;
    int n1 = middle - left;
    int n2 = right - middle;

    card leftarray[n1 + 1], rightarray[n2 + 1];
    for (int i = 0; i < n1; i++)
    {
        leftarray[i] = a[left + i];
    }
    leftarray[n1].surt = 'A';
    leftarray[n1].value = inf;

    for (int i = 0; i < n2; i++)
    {
        rightarray[i] = a[middle + i];
    }
    rightarray[n2].surt = 'A';
    rightarray[n2].value = inf;

    int i = 0, j = 0;
    for (int k = left; k < right; k++)
    {
        if (leftarray[i].value <= rightarray[j].value)
        {
            a[k] = leftarray[i];
            i++;
        }
        else
        {
            a[k] = rightarray[j];
            j++;
        }
    }
}

void my_margesort(card a[], int left, int right)
{
    int middle;
    if (left + 1 < right)
    {
        middle = (left + right) / 2;
        my_margesort(a, left, middle);
        my_margesort(a, middle, right);
        merge(a, left, right, middle);
    }
}

bool equal_check(card a[], card b[], int n){
    bool ret = false;
    int checksum = 0;
    for (int i = 0; i < n; i++){
        if (a[i].surt == b[i].surt && a[i].value == b[i].value)
            checksum++;    
    }
    if (checksum == n) ret = true;
    return ret;
}

int main()
{

#ifdef DEBUG
    cout << "DEBUG MODE" << endl;
    ifstream in("input.txt"); //for debug
    cin.rdbuf(in.rdbuf());    //for debug
#endif

    int n;
    cin >> n;
    card a[n], b[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].surt >> a[i].value;
        b[i] = a[i];
    }
    quicksort(a, 0, n - 1);
    my_margesort(b, 0, n);
    cout << (equal_check(a,b,n) ? "Stable" : "Not stable") << endl;
    printcard(n, a);
    
    return 0;
}

// getline(cin,s);
// a = strtok(s, ",");  ","で分解
// for (int i = 0; i < n; i++)
