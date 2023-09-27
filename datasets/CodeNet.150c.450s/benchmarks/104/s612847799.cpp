//
//Let's play Amidakuji.
//
//In the following example, there are five vertical lines and four horizontal lines.The horizontal lines can intersect(jump across) the vertical lines.
//
#include <iostream>
using namespace std;

typedef struct _INTPAIR {
    int a;
    int b;
} INTPAIR;

bool read(int& w, int& n, INTPAIR** ppArray);
bool initializeRod(const int w, int** ppArray);
bool swapRods(const int n, const INTPAIR* pConditions, int* pRods);
bool Write(const int w, const int* pRods);

int main()
{
    int w = 0, n = 0;
    INTPAIR* pConditions = NULL;
    int* pRods = NULL;

    // Start read conditions.
    if (!read(w, n, &pConditions))
        return 1;

    // Create rods.
    if (!initializeRod(w, &pRods))
        return 1;

    // Start swap rods.
    if (!swapRods(n, pConditions, pRods))
        return 1;

    // Output rods.
    if (!Write(w, pRods))
        return 1;
    
    delete[] pConditions;
    delete[] pRods;
}

bool read(int& w, int& n, INTPAIR** ppArray)
{
    char dummy;

    if (NULL == ppArray || NULL != *ppArray)
        return false;

    cin >> w;
    cin >> n;

    *ppArray = new INTPAIR[n];
    
    for (int i = 0; i < n; i++) {
        cin >> ((*ppArray) + i)->a;
        cin >> dummy;
        cin >> ((*ppArray) + i)->b;
    }

    return true;
}

bool initializeRod(const int w, int** ppArray)
{
    if (NULL == ppArray || NULL != *ppArray)
        return false;

    *ppArray = new int[w];

    for (int i = 0; i < w; i++) {
        *(*ppArray + i) = i + 1;
    }

    return true;
}

bool swapRods(const int n, const INTPAIR* pConditions, int* pRods)
{
    if (NULL == pConditions || NULL == pRods)
        return false;

    for (int i = 0; i < n; i++) {
        int idxL = (pConditions + i)->a - 1;
        int idxR = (pConditions + i)->b - 1;
        int tmp = 0;
        tmp = *(pRods + idxL);
        *(pRods + idxL) = *(pRods + idxR);
        *(pRods + idxR) = tmp;
    }

    return true;
}

bool Write(const int w, const int* pRods)
{
    if (NULL == pRods)
        return false;

    for (int i = 0; i < w; i++)
        cout << *(pRods + i) << endl;

    return true;
}