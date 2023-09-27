#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <vector>
#include <numeric>
#include <algorithm>
using namespace std;

int main(){
    int n; cin >> n;
    
    vector<vector<int>> card(4, vector<int>(13));
    vector<vector<bool>> check(4, vector<bool>(13, false));
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 13; j++){
            card[i][j] = j+1;
        }
    }
    
    for(int i = 0; i < n; i++){
        char ch; int v;
        cin >> ch >> v;
        if(ch == 'S') check[0][v-1] = true;
        else if(ch == 'H') check[1][v-1] = true;
        else if(ch == 'C') check[2][v-1] = true;
        else check[3][v-1] = true;
    }
    
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 13; j++){
            if(!check[i][j]){
                if(i == 0) cout << "S " << card[i][j] << endl;
                else if(i == 1) cout << "H " << card[i][j] << endl;
                else if(i == 2) cout << "C " << card[i][j] << endl;
                else cout << "D " << card[i][j] << endl;
            }
        }
    }
    
    return 0;
}