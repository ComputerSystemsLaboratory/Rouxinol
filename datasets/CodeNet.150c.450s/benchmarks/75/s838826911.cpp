#include <bits/stdc++.h>
using namespace std;
struct tree
{
    int key, left, right, parent;
};
void my_sort_sub(int *t, int p, int n)
{
    int l = p * 2, r = p * 2 + 1, largest;
    if (l <= n && t[l] > t[p])
        largest = l;
    else
        largest = p;
    if (r <= n && t[r] > t[largest])
        largest = r;
    if (largest != p)
    {
        swap(t[largest], t[p]);
        my_sort_sub(t, largest, n);
    }
}
void my_sort(int *t, int n)
{
    for (int i = n / 2; i >= 1; --i)
    {
        my_sort_sub(t, i, n);
    }
}
int main()
{
    int H, key;
    cin >> H;
    int mytree[H + 1];
    for (int i = 1; i <= H; ++i)
        cin >> mytree[i];
    my_sort(mytree, H);
    for (int i = 1; i <= H; ++i)
        cout << ' ' << mytree[i];
    cout << '\n';
}
