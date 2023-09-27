#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int dx[4] = {0,1,0,-1};
int dy[4] = {-1,0,1,0};

int main(){
    int n;
    while(cin >> n && n){
        vector<pair<int,int> > sq;
        int num, dir;
        sq.push_back(make_pair(0,0));
        for(int i=0;i<n-1;i++){
            cin >> num >> dir;
            sq.push_back(make_pair(sq[num].first+dx[dir], sq[num].second+dy[dir]));
        }
        int minx = 1 << 29, maxx = -1;
        int miny = 1 << 29, maxy = -1;
        for(int i=0;i<sq.size();i++){
            minx = min(minx, sq[i].first);
            maxx = max(maxx, sq[i].first);
            miny = min(miny, sq[i].second);
            maxy = max(maxy, sq[i].second);
        }
        cout << maxy - miny + 1 << " " << maxx - minx + 1 << endl;
    }
}