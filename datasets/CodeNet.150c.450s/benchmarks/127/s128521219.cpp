#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <cctype>

#include <iostream>
#include <vector>
#include <deque>
#include <queue>
#include <map>
#include <set>
#include <algorithm>

using namespace std;

#define rep(i, n) for(int i = 0; i < n; i++)
#define repi(i,l,n) for(int (i)=(int)(l);(i)<(int)(n);(i)++)
#define d_arr(arr, h, w) rep(i,(h) ){ cout << "["; rep(j,(w) ) { cout << (arr)[i][j] << ", "; } cout << "]" << endl;}
#define IN(x,s,g) ((x) >= (s) && (x) < (g))
#define ISIN(x,y,w,h) (IN((x),0,(w)) && IN((y),0,(h)))
#define print(x) printf("%d\n",x);
#define fs first
#define sc second
#define all(n) n.begin(),n.end()

int main()
{
    int ndata;
    set<string> garage;
    int ntrain;
    cin >> ndata;
    rep(i,ndata){
        garage.clear();
        string train;
        cin >> train;
        int ntrain = train.size();
        repi(k,1,ntrain){
            string former = train.substr(0,k);
            string latter = train.substr(k,ntrain);
            garage.insert(former+latter);
            //cout << former+latter << endl;
            garage.insert(latter+former);
            //cout << latter+former << endl;

            reverse( all(former) );
            garage.insert(former+latter);
            //cout << former+latter << endl;
            garage.insert(latter+former);
            //cout << latter+former << endl;

            reverse( all(former) );
            reverse( all(latter) );
            garage.insert(former+latter);
            //cout << former+latter << endl;
            garage.insert(latter+former);
            //cout << latter+former << endl;

            reverse( all(former) );
            garage.insert(former+latter);
            //cout << former+latter << endl;
            garage.insert(latter+former);
            //cout << latter+former << endl;
        }
        cout << garage.size() << endl;
    }
}