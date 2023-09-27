#include<iostream>
using namespace std;

int cnt, a[23][23];  //black : 0, red : 1

void dfs(int x, int y){
    cnt++;
    a[x][y] = 1;
    if(!a[x + 1][y]) dfs(x + 1, y);
    if(!a[x - 1][y]) dfs(x - 1, y);
    if(!a[x][y + 1]) dfs(x, y + 1);
    if(!a[x][y - 1]) dfs(x, y - 1);
    return;
}

int main(){
    while(1){
        int i, j, w, h, si, sj;
        char in;
        cin >> w >> h;
        if(w == 0)break;
        
        cnt = 0;
        for(i = 0; i <= h + 1; i++){
            a[i][0] = a[i][w + 1] = 1;
        }
        for(j = 0; j <= w + 1; j++){
            a[0][j] = a[h + 1][j] = 1;
        }
       
        i = 1;
        j = 1;
        while(i <= h){
            while(j <= w){
                cin >> in;
                //cout << "~~" << endl;
                if(in == '.'){
                   a[i][j] = 0;
                   j++; 
                }else if(in == '#'){
                    a[i][j] = 1;
                    j++;
                }else if(in == '@'){
                    si = i;
                    sj = j;
                    a[i][j] = 1;
                    j++;
                }
                //cout << j << endl;
            
            
            
            }
            i++;
            j = 1;
        }
        dfs(si, sj);
        cout << cnt << endl;
    }
    return 0;
}