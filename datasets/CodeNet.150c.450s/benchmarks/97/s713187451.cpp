/*http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=1165&lang=jp*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int num;
    pair<int,int> direction[]={{-1,0},{0,1},{1,0},{0,-1}};


    while(cin>> num && 0< num){
        vector<int> x;
        vector<int> y;

        x.push_back(0);
        y.push_back(0);
        for (int i = 1; i < num; ++i) {
            int n,d;

            cin>>n>>d;
            x.push_back(x[n]+direction[d].first);
            y.push_back(y[n]+direction[d].second);
        }
        cout<<*max_element(x.begin(),x.end())-*min_element(x.begin(),x.end())+1<<" "<<*max_element(y.begin(),y.end())-*min_element(y.begin(),y.end())+1<<endl;
    }
    return 0;
}