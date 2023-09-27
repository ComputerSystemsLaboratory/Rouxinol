#include <vector>
#include <algorithm>
#include <map>
using namespace std;
typedef long long i64;
typedef pair<i64,i64> P;

int Lower(vector<i64>& a, vector<int>& index ,int l,int r,i64 key)
{
    while(r - l > 1)
    {
        int m = (l + r) / 2;
        if(a[index[m]] >= key)
        {
            r = m;
        }
        else
        {
            l = m;
        }
    }
    return r;
}

vector<int> LIS(vector<i64>& a)
{
    if(a.size() == 0) return vector<int>();

    vector<int> tail;
    vector<int> rev(a.size(),-1);
    tail.push_back(0);

    for(int i = 1;i < a.size();i++)
    {
        if(a[i] < a[tail[0]])
        {
            tail[0] = i;
        }
        else if(a[i] > a[tail.back()])
        {
            tail.push_back(i);
        }
        else
        {
            tail[Lower(a,tail,-1,tail.size() - 1,a[i])] = i;           
        }
    }

    return tail;
}

#include <iostream>

int main()
{
    int n;
    cin >> n;
    vector<i64> a;
 
    for(int i = 1;i <= n;i++)
    {
        int t;
        cin >> t;
        a.push_back(t);
    }

    cout << LIS(a).size() << endl;
}


