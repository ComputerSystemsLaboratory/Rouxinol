#include<iostream>
#include<vector>
#include<stdio.h>
using namespace std;
#define DUMP(x)  cerr << #x << " = " << (x) << endl;
#define DEBUG(x) cerr << #x << " = " << (x) << " (L" << __LINE__ << ")" << " " << __FILE__ << endl;

vector<vector<int> > map;
vector<vector<bool> > reach;
int w,h;

void dfs(int i, int j){
    if((reach[i][j]) or (map[i][j]==0))
        return;
    reach[i][j] = true;
    if(0<i && 0<j) dfs(i-1,j-1);
    if(0<i) dfs(i-1,j);
    if(0<i && j<w-1) dfs(i-1,j+1);
    if(0<j) dfs(i, j-1);
    if(j<w-1) dfs(i, j+1);
    if(i<h-1 && 0<j) dfs(i+1,j-1);
    if(i<h-1) dfs(i+1,j);
    if(i<h-1 && j<w-1) dfs(i+1,j+1);
}

int main(){

    while((cin >> w >> h) && (w>0 && h>0)){
        int res=0;
        for (int i = 0; i < h; i++) {
            vector<int> temp(w,0);
            for (int j = 0; j < w; j++)
                cin >> temp[j];
            map.push_back(temp);
        }
        for (int i = 0; i < h; i++){
            vector<bool> temp(w,false);
            reach.push_back(temp);
        }
        for (int i = 0; i < h; i++) {
            for (int j = 0; j < w; j++) {
                if(map[i][j]==1 && !reach[i][j]){
                    res++;
                    dfs(i,j);
                }
            }
        }
        cout << res << endl;
        map.clear();
        reach.clear();

    }
    return 0;
}