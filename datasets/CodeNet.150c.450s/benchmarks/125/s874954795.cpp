#include <utility>
#include <math.h>
#include <vector>
#include <algorithm>
#include <string>
#include <iostream>

using namespace std;

int c;
int a[100][100];
int times = 0;
vector<pair<int,int> > v;

vector<int> search(int node)
{
    vector<int> r;
    for(int i = 0;i<c;i++)
    {
        if(a[node][i] == 1)
            r.push_back(i);
    }
    return r;
}

int deep(int node)
{
    if(v[node].first == 0)
    {
        v[node].first = ++times;
        vector<int> r = search(node);
        for(int i = 0;i<r.size();i++)
        {
            deep(r[i]);
            
        }
        v[node].second = ++times;
    }
    else
        return -1;

    return 1;
}

int main() {

    cin >> c;
    for(int i= 0;i<c;i++)
        for(int j = 0;j<c;j++)
            a[i][j] = 0;
    v = vector<pair<int,int> >(c,{0,0});
    for(int i = 0; i<c;i++)
    {
        int rem[2];
        cin >> rem[0] >> rem[1];
        for(int j = 0;j<rem[1];j++)
        {
            int rem11;
            cin >> rem11;
            a[i][rem11-1] = 1;
        }
    }//cin fin
    for(int i = 0;i<c;i++)
    {
        if(v[i].first == 0)
            deep(i);
    }
    
    for(int i = 0; i<c;i++)
    {
        cout << i+1 << " " << v[i].first << " " << v[i].second << endl;
    }
    
    return 0;
}