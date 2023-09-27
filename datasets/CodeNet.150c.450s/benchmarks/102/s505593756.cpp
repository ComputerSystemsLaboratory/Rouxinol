#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <tuple>

using namespace std;

void dfs( int W, int H, int w_index, int h_index, vector< vector<char> > &V, int &ans );

int main(int argc, char const *argv[]) {
    vector< vector<char> > vec;

    int w, h, w_index, h_index, ans;
    vector<int> sums;

    while (1) {
        ans = 1;
        cin >> w >> h;

        if( w==0 || h==0 ) break;

        vec.resize(h);
        for (int i = 0; i < h; i++) {
            vec[i].resize(w);
        }

        for (int i = 0; i < h; i++) {
            for (int j = 0; j < w; j++) {
                cin >> vec[i][j];
            }
        }

        for (auto it = vec.begin(); it != vec.end(); it++ ) {
            auto iter = find(it->begin(), it->end(), '@');

            if(iter!=it->end()){
                h_index = distance( vec.begin(), it );
                w_index = distance( it->begin(), iter );
            }
        }

        dfs( w, h, w_index, h_index, vec, ans );

        sums.push_back( ans );
    }

    for( auto it = sums.begin(); it != sums.end(); it++ ){
        cout << *it << endl;
    }

    return 0;
}

void dfs( int W, int H, int w_index, int h_index, vector< vector<char> > &v , int &ans ){
    int dx[4] = { 1, 0, -1, 0 };
    int dy[4] = { 0, 1, 0, -1 };
    v[h_index][w_index] = '#';

    for( int i = 0; i < 4; i++ ){
        int nx = w_index + dx[i];
        int ny = h_index + dy[i];

        if( 0 <= nx && nx < W && 0 <= ny && ny < H && v[ny][nx] != '#' ){
            ans++;
            dfs( W, H, nx, ny, v, ans );
        }
    }
    return;
}