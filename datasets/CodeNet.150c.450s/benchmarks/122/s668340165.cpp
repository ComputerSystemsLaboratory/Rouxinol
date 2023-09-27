#include <bits/stdc++.h>

using namespace std;

long long data[2000009], n;

void sift_up(int p)
{
    //cout << "SIFT_UP" << p << endl;
    //cout << n << endl;
    //for(int i = 1; i <= n; i ++)
    //    cout << data[i] << ' ';
    //cout << endl;
    bool done = false;
    if(p == 1)return;
    while(p != 1 && ! done)
    {
        if(data[p] > data[p >> 1])
            swap(data[p], data[p >> 1]);
        else done = true;
        p >>= 1;
    }
    //cout << n << endl;
    //for(int i = 1; i <= n; i ++)
    //    cout << data[i] << ' ';
    //cout << endl;
}

void sift_down(int p)
{
    //cout << "SIFT_DOWN" << endl;
    //cout << n << endl;
    //for(int i = 1; i <= n; i ++)
    //    cout << data[i] << ' ';
    //cout << endl;
    bool done = false;
    if((p << 1) > n)return;
    while((p << 1) <= n && !done)
    {
        p <<= 1;
        if(p + 1 <= n && data[p] < data[p + 1])p ++;
        if(data[p >> 1] < data[p])
            swap(data[p], data[p >> 1]);
        else done = true;
    }
    //cout << n << endl;
    //for(int i = 1; i <= n; i ++)
    //    cout << data[i] << ' ';
    //cout << endl;
}

void insert_node(int x)
{
    n ++;
    data[n] = x;
    sift_up(n);
}

void delete_node(int p)
{
    int x = data[p], y = data[n];
    //cout << x << ' ' << y << endl;
    n --;
    if(p == n + 1)return ;
    data[p] = y;
    if(y >= x)sift_up(p);
    else sift_down(p);
}

long long delete_max(int p)
{
    long long x = data[1];
    delete_node(1);
    return x;
}

void makeheap()
{
    for(int i = n >> 1; i >= 1; i --)
        sift_down(i);
}

int main()
{
    ios :: sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string str;
    long long x;
    n = 0;
    while(cin >> str)
    {
        if(str == "insert")
        {
            cin >> x;
            insert_node(x);
        }
        else if(str == "extract")
        {
            cout << delete_max(1) << endl;
        }
        else if(str == "end")
            break;
    }
    return 0;
}
/*
insert 1982
extract
insert 922
extract
insert 19821
insert 19823
extract
insert 1
extract
*/

