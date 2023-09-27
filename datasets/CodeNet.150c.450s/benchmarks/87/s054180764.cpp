#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <vector>
#include <queue>
#include <numeric>
#include <string>
#include <string.h>
#include <map>
#include <set>
#include <functional>
#include <complex>
#include <stack>
#include <tuple>

#define ll long long int

using namespace std;

const int INF = (1<<30) - 1;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int H;
    while (cin>>H, H) {
        vector<vector<int>> field(H, vector<int>(5));
        for(int i=0; i<H; i++)
            for(int j=0; j<5; j++)
                cin >> field[i][j];
        
        int ans = 0;
        bool updated = true;
        while (updated) {
            updated = false;
            for (int i=0; i<H; i++) {
                int c = 1;
                int a = 0, b = 0;
                for(int j=1; j<5; j++){
                    if(field[i][j] != 0 && field[i][j-1] == field[i][j])
                        c++;
                    else
                        c = 1;
                    if(c >= 3){
                        b = j + 1;
                        a = b- c;
                        updated = true;
                    }
                }
                for(int j=a; j<b; j++){
                    ans += field[i][j];
                    field[i][j] = 0;
                }
            }
            
            for(int i=0; i<5; i++){
                int index = H-1;
                for(int j=H-1; 0<=j; j--){
                    while(index >= 0 && field[index][i] == 0)
                        index--;
                    
                    field[j][i] = (index < 0 ? 0 : field[index--][i]);
                }
            }
        }
        cout << ans << endl;
    }
    
    return 0;
}