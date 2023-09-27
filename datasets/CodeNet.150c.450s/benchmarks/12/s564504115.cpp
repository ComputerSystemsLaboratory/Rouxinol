#include <iostream>
#include <cmath>

using namespace std;

#define MAX 250

int parent(int i)
{
    return (int)floor(i / 2);
};
int left(int i)
{
    return i * 2;
}

int right(int i)
{
    return i * 2 + 1;
}

int main ()
{
    int H;
    int A[MAX + 1];

    cin >> H;

    for (int i = 1; i <= H; i++)
    {
        cin >> A[i];
    }

    for (int i = 1; i <= H; i++)
    {
        cout << "node " << i << ":";
        cout << " key = " << A[i] << ", ";

        if (parent(i) > 0)
            cout << "parent key = " << A[parent(i)] <<  ", ";

        if (left(i) <= H)            
            cout << "left key = " << A[left(i)] << ", ";

        if (right(i) <= H)            
        cout << "right key = " << A[right(i)] << ", ";
        cout << endl;
    }

    return 0;
}
