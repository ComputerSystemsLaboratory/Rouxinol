#include <bits/stdc++.h>
using namespace std;
#define N_PRIME 1000000007
#define ll int64_t

int w,h;
bool is_land[64][64];

void show(){
    for(int y = 1 ; y <= h ; y++ ){
        for(int x = 1; x <= w ;x++){
            cout << is_land[x][y] ?'1':'0';
        }
        cout << endl;
    }
}

bool fill(int x,int y){
    if( is_land[x][y] == false )
        return false;
    
    is_land[x][y] = false;
    for(int dx = -1 ; dx <= 1 ; dx++){
        for(int dy = -1 ; dy <= 1 ; dy++ ){ 
            fill(x+dx,y+dy);
        }
    }
    
    return true;
}

void subroutine(){
    
    for(int i = 0 ; i < 64 * 64 ; i++ )
        is_land[i/64][i%64] = false;
    
    cin >> w >> h;
    if( w == 0 && h == 0 )exit(0);
    
    for(int y = 0 ; y < h ; y++ ){
        for(int x = 0 ;x < w ; x++ ){
            int temp;
            cin >> temp;
            is_land[x+1][y+1] = temp == 1;
        }
    }
    int count = 0 ;
    
    for(int y = 1 ; y <= h ; y++ ){
        for(int x = 1 ;x <= w ; x++ ){
            if(  fill(x,y) )
                count++;
            //show();
        }
    }
    
    cout << count << endl;
}

int main(void){
    while(true)subroutine();
    return 0;
}