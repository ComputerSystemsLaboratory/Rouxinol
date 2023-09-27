#include <iostream>
#include <cmath>
#include <vector>
#include <climits>
#include <cstdlib>
using namespace std;
class card
{
public:
    char pic;
    int num;
};
void bubbleSort(vector<card> &c,int n)
{
    for(int i = 0;i < n;i++)
    {
        for(int j = n - 1;j > i;j--)
        {
            if(c.at(j).num < c.at(j - 1).num)
            {
                card t = c.at(j - 1);
                c.at(j - 1) = c.at(j);
                c.at(j) = t;
            }
        }
    }
}
void selectionSort(vector<card> &c,int n)
{
    for(int i = 0;i < n;i++)
    {
        int minj = i;
        for(int j = i;j < n;j++)
        {
            if(c.at(j).num < c.at(minj).num)
            {
                minj = j;
            }
        }
        card t = c.at(i);
        c.at(i) = c.at(minj);
        c.at(minj) = t;
    }
}
bool checkStable(vector<card> b,vector<card> a)
{
    string s;
    int n = 0;
    for(int i = 0;i < a.size();i++)
    {
        if(n == 0)
        {
            n = a.at(i).num;
            s = a.at(i).pic;
        }
        else if(n == a.at(i).num)
        {
            s += a.at(i).pic;
        }
        else
        {
            string t;
            for(int j = 0;j < b.size();j++)
            {
                if(b.at(j).num == a.at(i - 1).num)
                {
                    t += b.at(j).pic;
                }
            }
            if(s != t)
            {
                return false;
            }
            s.clear();
            s = a.at(i).pic;
            n = a.at(i).num;
        }
    }
    return true;
}
int main()
{
    int n;
    cin >> n;
    vector<card> b,c;
    for(int i = 0;i < n;i++)
    {
        string s;
        card t;
        cin >> s;
        t.pic = s.at(0);
        t.num = atoi(&s.at(1));
        b.push_back(t);
    }
    copy(b.begin(),b.end(),back_inserter(c));
    bubbleSort(c,n);
    for(int i = 0;i < n;i++)
    {
        cout << c.at(i).pic << c.at(i).num;
        if(i + 1 != n)
        {
            cout << " ";
        }
        else
        {
            cout << endl;
        }
    }
    if(checkStable(b,c))
    {
        cout << "Stable";
    }
    else
    {
        cout << "Not stable";
    }
    cout << endl;
    c.clear();
    copy(b.begin(),b.end(),back_inserter(c));
    selectionSort(c,n);
    for(int i = 0;i < n;i++)
    {
        cout << c.at(i).pic << c.at(i).num;
        if(i + 1 != n)
        {
            cout << " ";
        }
        else
        {
            cout << endl;
        }
    }
    if(checkStable(b,c))
    {
        cout << "Stable";
    }
    else
    {
        cout << "Not stable";
    }
    cout << endl;
}