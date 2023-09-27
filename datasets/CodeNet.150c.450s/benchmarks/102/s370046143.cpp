#include <iostream>
#include <string>
#include <vector>

int visit(int a, int b);

using namespace std;

vector<string> cell;
vector< vector<bool> > check;
int c, d;

int main(){
    
    while(cin >> c >> d, c | d){
        string temp;
        int x = 0, y = 0;
        
        for(int i = 0; i < d; i++){
            cin >> temp;
            cell.push_back(temp);
        }
        
        for(int i = 0; i < d; i++){
            for(int j = 0; j < c; j++){
                if(cell[i][j] == '@'){
                    x = j;
                    y = i;
                }
            }
        }
        
        for(int i = 0; i < d; i++){
            vector<bool> temp2;
            for(int j = 0; j < c; j++){
                temp2.push_back(false);
            }
            check.push_back(temp2);
        }
        
        cout << visit(y, x) << endl;
        
        cell.clear();
        check.clear();
        
        
    }
    
    return 0;
}

int visit(int a, int b){
    int ans = 0;
    
    check[a][b] = true;
    
    if(a + 1 < d && cell[a + 1][b] != '#' && !check[a + 1][b]){
        ans += visit(a + 1, b);
    }
    
    if(b + 1 < c && cell[a][b + 1] != '#' && !check[a][b + 1]){
        ans += visit(a, b + 1);
    }
    
    if(a - 1 > -1 && cell[a - 1][b] != '#' && !check[a - 1][b]){
        ans += visit(a - 1, b);
    }
    
    if(b - 1 > -1 && cell[a][b - 1] != '#' && !check[a][b - 1]){
        ans += visit(a, b - 1);
    }
    
    ans++;
    
    return ans;
}