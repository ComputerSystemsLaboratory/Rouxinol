#include <iostream>
#include <algorithm>
#include <utility>

using namespace std;


typedef std::pair<int,int> P;

const int INF = 1000000;

int diagram(P p){
    return p.first * p.first + p.second * p.second;
}

int compare(P a, P b){
    if(diagram(a) > diagram(b))
        return -1;
    if(diagram(a) < diagram(b))
        return 1;
    //diagram(a) == diagram(b)
    if(a.first > b.first)
        return -1;
    if(a.first < b.first)
        return 1;
    return 0;
}

int main() {
    int h, w;
    while(cin >> h >> w, h) {
        P s = make_pair(h,w);
        P ans = make_pair(150,150);
        int ww = 200, hh = 200;
        int dd = INF;
        for(int i = 1; i <= 150; i++) {
            for(int j = 1; j <= 150; j++) {
                P p = make_pair(j,i);
                if(p.first < p.second && compare(s,p)>0 && compare(p,ans)>0){
                    ans = p;
                }
            }
        }

        cout << ans.first << ' ' << ans.second << endl;
    }
}