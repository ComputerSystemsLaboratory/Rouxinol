#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(void){
    vector< pair<int, int> > res;
    while(1) {
        int h, w;
        cin >> h >> w;
        if(w == 0) break;
        vector< pair<int, int> > d[100100];
        int min_ = h*h+w*w;
        int ans = 1 << 30;
        for(int i = 2; i < 150; i++) {
            for(int j = 1; j < i; j++) {
                if(min_ <= i*i+j*j && ans >= i*i+j*j) {
                    if(min_ != i*i+j*j) {
                        ans = i*i+j*j;
                        d[ans].push_back(make_pair(j, i));
                    }
                    else if(j > h) {
                        ans = i*i+j*j;
                        d[ans].push_back(make_pair(j, i));
                    }
                }
            }
        }
        sort(d[ans].begin(), d[ans].end());
        for(int i = 0; i < d[ans].size(); i++) {
            pair<int, int> p;
            p.first = d[ans][i].first;
            p.second = d[ans][i].second;
            res.push_back(make_pair(p.first, p.second));
            //cout << p.first << " " << p.second << endl;
            break;
        }
    }
    for(int i = 0; i < res.size(); i++) {
        cout << res[i].first << " " << res[i].second << endl;
    }
    return 0;
}
