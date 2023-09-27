#include <iostream>
using namespace std;

struct card
{
    char suit;
    int value;
};
void bubble(card A[], int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=n-1; j>=i+1; j--)
        {
            if(A[j].value<A[j-1].value)
            {
                card t = A[j];
                A[j] = A[j-1];
                A[j-1] = t;
            }
        }
    }
}
void selection(card A[], int n)
{
    for(int i=0; i<n; i++)
    {
        int minj = i;
        for(int j=i+1; j<n; j++)
        {
            if(A[j].value<A[minj].value)
            {
                 minj = j;
            }
        }
        if(i != minj)
        {
            card t = A[i];
            A[i] = A[minj];
            A[minj] = t;
        }
    }
}
void print(card A[],int n)
{
    for(int i=0; i<n-1; i++)
        cout << A[i].suit << A[i].value << " ";
    cout << A[n-1].suit << A[n-1].value << endl;
}
int main()
{
    card c1[100], c2[100];
    int n;
    cin >> n;
    for(int i=0; i<n; i++)
        cin >> c1[i].suit >> c1[i].value;
    for(int i=0; i<n; i++)
        c2[i] = c1[i];
    bubble(c1,n);
    selection(c2,n);
    print(c1,n);
    cout << "Stable" << endl;
    print(c2,n);
    for(int i=0; i<n; i++)
    {
        if(c1[i].suit != c2[i].suit)
        {
            cout << "Not stable" << endl;
            break;
        }
        if(i == n-1)  cout << "Stable" << endl;
    }
    return 0;
}