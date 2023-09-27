#include <vector>
#include <algorithm>
#include <map>
using namespace std;
typedef long long i64;

int CeilIndex(const vector<i64>& tail,int l,int r,i64 key)
{
    while(r - l > 1)
    {
        int m = (l + r) / 2;
        if(tail[m] >= key)
            r = m;
        else   
            l = m;
    }
    return r;
}

vector<i64> LIS(const vector<i64>& vec)
{
    vector<i64> tail;
    tail.push_back(vec[0]);

    for(int i = 1;i < vec.size();++i)
    {
        if(vec[i] < tail[0])
            tail[0] = vec[i];
        else if(vec[i] > tail.back())
        tail.push_back(vec[i]);
        else
        {
            tail[CeilIndex(tail,-1,tail.size() - 1,vec[i])] = vec[i];
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
    for(int i = 0;i < n;i++)
    {
        int t;
        cin >> t;
        a.push_back(t);
    }

    cout << LIS(a).size() << endl;
}


