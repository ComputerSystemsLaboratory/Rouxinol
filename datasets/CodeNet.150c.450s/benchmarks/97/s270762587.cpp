#include <iostream>
#include <cstring>
#include <utility>
#include <vector>
#include <algorithm>
using namespace std;

#define MAXSIZE 500
#define CENTER (MAXSIZE / 2)

// ?????´(= 0)????????´ (= 1)????????´ (= 2)????????´ (= 3)
int dx[4] = {-1, 0, 1, 0};
int dy[4] = { 0,-1, 0, 1};

int main(int argc, const char * argv[]) {
    while(1){
        int n; cin >> n;
        if(!n) break;
        
        int left, right, top, bottom;
        left = right = top = bottom = CENTER;
        
        vector<pair<int, int> > tableIndex;
        tableIndex.push_back(make_pair(CENTER, CENTER));
        
        for(int i = 1; i < n; i++){
            int m, d; cin >> m >> d;
            
            int x = tableIndex[m].first + dx[d];
            int y = tableIndex[m].second + dy[d];
            tableIndex.push_back(make_pair(x, y));
            
            left = min(left, x);
            right = max(right, x);
            top = min(top, y);
            bottom = max(bottom, y);
        }
        
        cout << right - left + 1 << " " << bottom - top + 1 << endl;
    }
}