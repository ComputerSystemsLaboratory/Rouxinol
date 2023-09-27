#include <iostream>
using namespace std;
int w,h;
int in[100][100];
bool seen[100][100];
int ans =0;

void solve(int i,int j){
    //cout << i << " " << j << endl;
    if(i < 0 || j < 0 || i >= h || j >= w){
        return;
    }
    if(seen[i][j]){
        return;
    }
    if(in[i][j] == 0){
        return;
    }
    seen[i][j] = true;
    solve(i-1,j-1);
    solve(i-1,j);
    solve(i-1,j+1);
    solve(i,j-1);
    solve(i,j+1);
    solve(i+1,j-1);
    solve(i+1,j);
    solve(i+1,j+1);

}
int main(){
    while(1){
    cin >> w >> h;
    if(w == 0 && h == 0){
        break;
    }
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            cin >> in[i][j];
            seen[i][j] = false;
        }
    }
    ans = 0;
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            if(seen[i][j] == true || in[i][j] == 0){
            }
            else{
                solve(i,j);
                ans++;
            }
            
        }
    }
   
     cout << ans << endl;
    }
    return 0;
}
