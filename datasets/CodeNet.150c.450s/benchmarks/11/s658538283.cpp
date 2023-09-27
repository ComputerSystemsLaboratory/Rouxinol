#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{    
    int n;
    cin >> n;
    vector<int> s;
    vector<int> h;
    vector<int> c;
    vector<int> d;
    for(int i = 0;i < n;i++)
    {
        char a;
        int b;
        cin >> a >> b;
        switch(a)
        {
        case 'S':
            s.push_back(b);
            break;
        case 'H':
            h.push_back(b);
            break;
        case 'C':
            c.push_back(b);
            break;
        case 'D':
            d.push_back(b);
            break;
        default:
            break;
        }
    }

    for(int i = 1;i < 14;i++)
    {
        bool flg = false;
        for(vector<int>::iterator itr = s.begin();itr != s.end();itr++)
        {
            if(i == *itr)
            {
                flg = true;
            }
        }
        if(flg == false)
        {
            cout << "S " << i << endl;
        }
    }

    for(int i = 1;i < 14;i++)
    {
        bool flg = false;
        for(vector<int>::iterator itr = h.begin();itr != h.end();itr++)
        {
            if(i == *itr)
            {
                flg = true;
            }
        }
        if(flg == false)
        {
            cout << "H " << i << endl;
        }
    }

    for(int i = 1;i < 14;i++)
    {
        bool flg = false;
        for(vector<int>::iterator itr = c.begin();itr != c.end();itr++)
        {
            if(i == *itr)
            {
                flg = true;
            }
        }
        if(flg == false)
        {
            cout << "C " << i << endl;
        }
    }

    for(int i = 1;i < 14;i++)
    {
        bool flg = false;
        for(vector<int>::iterator itr = d.begin();itr != d.end();itr++)
        {
            if(i == *itr)
            {
                flg = true;
            }
        }
        if(flg == false)
        {
            cout << "D " << i << endl;
        }
    }
    return 0;
}