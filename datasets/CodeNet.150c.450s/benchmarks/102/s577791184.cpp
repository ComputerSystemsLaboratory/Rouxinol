#include <iostream>
#include <vector>
#include <string>
#include <queue>

using namespace std;


int frip(vector<vector<char>>& map, int h, int w, int H, int W)
{
    int cnt = (map[h][w] == '.') ? 1 : 0;
    map[h][w] = 'x';
    if(w != 0 && map[h][w-1] == '.'){
        //++cnt;
//        map[h-1][w-1] = 'x';
        cnt += frip(map, h, w-1, H, W);
    }
    if(w != W-1 && map[h][w+1] == '.'){
        //++cnt;
//        map[h-1][w+1] = 'x';
        cnt += frip(map, h, w+1, H, W);
    }
    if(h != H-1 && map[h+1][w] == '.'){
        //++cnt;
//        map[h+1][w-1] = 'x';
        cnt += frip(map, h+1, w, H, W);
    }
    if(h != 0 && map[h-1][w] == '.'){
        //++cnt;
//        map[h+1][w+1] = 'x';
        cnt += frip(map, h-1, w, H, W);
    }
    
    return cnt;
}


int solve(vector<vector<char>>& map, int H, int W)
{
    int ci, cj;
    for(int i=0;i<H;++i) for(int j=0;j<W;++j) if(map[i][j] == '@') { ci = i; cj = j; }
    
    return frip(map, ci, cj, H, W) + 1;
}


int main()
{
    int H, W;
    while(cin >> W >> H, H){
        vector<vector<char>> map(H);
        for(int i=0;i<H;++i){
            string str{};
            cin >> str;
            map[i] = vector<char>(str.begin(), str.end());
        }
        
        cout << solve(map, H, W) << endl;
//        for(int i=0;i<H;++i){
//            for(int j=0;j<W;++j) cout << map[i][j];
//            cout << endl;
//        }
    }
    
    return 0;
}