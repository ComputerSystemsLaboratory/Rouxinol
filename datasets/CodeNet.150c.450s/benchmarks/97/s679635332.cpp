#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cstring>
#include <map>

#define REP(i,k,n) for(int i=k;i<n;i++)
#define rep(i,n) for(int i=0;i<n;i++)

using namespace std;

int main()
{
    int n;
    while(cin >> n && n)
    {
        map<int,pair<int,int> > m;
        m[0] = make_pair(0,0);

        rep(i,n-1) {
            int id,dir;
            cin >> id >> dir;

            pair<int,int> p = m[id];
            if(dir == 0) p.first--;
            if(dir == 1) p.second--;
            if(dir == 2) p.first++;
            if(dir == 3) p.second++;

            m[i+1] = p;
        }

        int xmin = 0,xmax = 0,ymin = 0,ymax = 0;
        map<int,pair<int,int> >::iterator ite;
        for(ite = m.begin();ite != m.end();ite++) {
            pair<int,int> p = ite->second;

            xmin = min(xmin,p.first);
            xmax = max(xmax,p.first);
            
            ymin = min(ymin,p.second);
            ymax = max(ymax,p.second);
        }

        cout << xmax - xmin + 1 << " " << ymax - ymin + 1 << endl;
    }

    return 0;
}