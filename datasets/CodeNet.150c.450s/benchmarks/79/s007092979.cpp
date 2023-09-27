#include <iostream>
#include <cstdio>
#include <vector>
#include <queue>
#include <stack>
#include <map>
#include <string>
#include <algorithm>

using namespace std;

constexpr int MAX = 50;

int main (int argc, char *argv[]) {
    int n, r, p, c;
    vector<int> h;
    int i, j;
    
    // input
    while (cin>>n>>r, n||r) {
        // init
        for (i = 0, j = 1; i < n; ++i, ++j) {
            h.push_back(j);
        }

        // solve
        for (i = 0; i < r; ++i) {
            // cout<<"-----init------"<<endl;
            // for (int i = n-1; i > -1; --i) {
            //     cout<<i<<":"<<h[i]<<endl;
            // }

            cin>>p>>c;

            int p_ = n - p;
            int c_ = p_ - (c - 1);

            // copy
            vector<int> tmp;
            for (int i = 0; i < c; ++i) {
                tmp.push_back(h[c_]);
                c_++;
            }

            // cout<<"---tmp---"<<endl;
            // for (int i = c-1; i >= 0; --i) {
            //     cout<<tmp[i]<<endl;
            // }

            // erase
            c_ = p_ - (c - 1);
            h.erase(h.begin() + c_, h.begin() + c_ + c);

            // cout<<"-----erase------"<<endl;
            // // for (int i = n-1; i > -1; --i) {
            // //     cout<<h[i]<<endl;
            // // }
            // for (auto e : h) {
            //     cout<<e<<endl;
            // }
        
            // copy
            for (int i = 0; i < c; ++i) {
                h.push_back(tmp[i]);
            }

            tmp.clear();
        }

        // cout<<"-----init------"<<endl;
        // for (int i = n-1; i > -1; --i) {
        //     cout<<h[i]<<endl;
        // }

        // cout<<"---ans---"<<endl;
        cout<<h[n-1]<<endl;
        
        // clear
        h.clear();
    }
    return 0;
}