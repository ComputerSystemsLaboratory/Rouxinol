#include <bits/stdc++.h>
using namespace std;
#define N_PRIME 1000000007
#define ll int64_t

void calc(){
    int w,h;
    int board[32][32];
    bool moved[32][32];
    int px,py;
    
    cin >> w >> h;
    if( w == 0 && h == 0)exit(0);
    for(int j = 0 ; j < h ;j++ ){
        string s;
        cin >> s;
        for(int i = 0 ; i < w ; i++ ){
            moved[i][j] = false;
            
            if( s[i] == '.' ){
                board[i][j] = 1;
            }else if(s[i] == '#' ){
                board[i][j] = 2;
            }else if(s[i] == '@' ){
                px = i;
                py = j;
                board[i][j] = 1;
            }
        }
    }
    
    int count = 0;
    queue<int> xs;
    queue<int> ys;
    xs.push(px);
    ys.push(py);
    
    while(xs.size()>0){
        px = xs.front();
        py = ys.front();
        xs.pop();
        ys.pop();
        
        if( px < 0 || w <= px || py < 0 || h <= py )
            continue;
        
        if( moved[px][py] )
            continue;
        moved[px][py] = true;
        
        if( board[px][py] == 2 )
            continue;

        xs.push(px + 1 );
        ys.push(py + 0 );
        
        
        xs.push(px + 0 );
        ys.push(py + 1 );
        
        
        xs.push(px - 1 );
        ys.push(py + 0 );
        
        
        xs.push(px + 0 );
        ys.push(py - 1 );
        count++;
    }
    
    cout << count << endl;
}

int main(void){
    while(true)calc();
    return 0;
}