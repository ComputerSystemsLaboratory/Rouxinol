#include <bits/stdc++.h>

using namespace std;
long int d[1000000];
const long int INF = 5000000000;
int main()
{
    map<pair<int, int>, int > mymap;
    map<pair<int, int>, int >::iterator it;
    int v;
    int e;
    int r;
    cin >> v >> e >> r;
    for(int a1 = 0; a1 < e; a1++){
        int v1;
        int v2;
        int cost;
        cin >> v1 >> v2 >> cost;
        mymap[make_pair(v1,v2)] = cost;
    }
      if (v == 1)
    {
        cout << 0 << endl;
        return 0;
    }
    for (int i = 0; i < v;i++)
        d[i] = INF;
    d[r] = 0;
    for(int a = 0; a < v; a++)
    {
        bool check = false;
        for (it = mymap.begin(); it != mymap.end();it++)
        {
            if (d[it->first.first] != INF && d[it->first.second] > d[it->first.first] + it->second)
            {
                d[it->first.second] = d[it->first.first] + it->second;
                check = true;
            }

        }
        if (a == v - 1){
            cout << "NEGATIVE CYCLE" << endl;
            return 0;
        }
        if (check == false) break;
    }
    for (int i = 0; i < v; i++)
    {
        if (d[i] != INF)
            cout << d[i] << endl;
        else
            cout << "INF" << endl;
    }
    return 0;
}