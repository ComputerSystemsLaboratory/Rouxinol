#include <iostream>
using namespace std;

long long a[500];
int parent(int i)
{
    return i/2;
}
int left(int i)
{
    return 2*i;
}
int right(int i)
{
    return 2*i+1;
}
int main()
{
    int H, p, l, r;
    cin >> H;
    for(int i=1; i<=H; i++)
        cin >> a[i];
    for(int i=1; i<=H; i++)
    {
        p = parent(i);
        l = left(i);
        r = right(i);
        cout << "node " << i << ": " << "key = " << a[i] << ", ";
        if(parent(i)>=1) cout << "parent key = " << a[p] << ", ";
        if(left(i)<=H)   cout << "left key = " << a[l] << ", ";
        if(right(i)<=H)  cout << "right key = " << a[r] << ", ";
        cout << endl;
    }
    return 0;
}