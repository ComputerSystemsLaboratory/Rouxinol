#include <bits/stdc++.h>
using namespace std;
#define N_PRIME 1000000007
#define ll int64_t


int main(void){
    while(true){
        int N;
        bool b[32][32] = {false};
        cin >> N;
        if( N==0 )return 0;
        
        for(int i = 0 ; i < N ;i ++ ){
            int x,y;
            cin >> x >> y;
            b[x][y] = true;
        }
        //cout << "A" << endl;
        
        int x = 10,y = 10;
        int count = 0;
        int M;
        cin >> M;
        
        if( b[10][10] ){
            count++;
            b[10][10] = false;
        }
        for(int i = 0 ; i < M ; i++ ){
            string s;
            int L;
            cin >> s;
            cin >> L;
            int dx,dy;
            
            switch(s[0]){
                case 'N':
                    dy = 1;dx =0;
                    break;
                case 'E':
                    dy = 0;dx = 1;
                    break;
                case 'S':
                    dy = -1;dx =0;
                    break;
                case 'W':
                    dy = 0;dx = -1;
                    break;
            }
            
            for(int j = 0 ; j < L ;j++ ){
                x += dx;
                y += dy;
                if( b[x][y] ){
                    count++;
                    b[x][y] = false;
                }
            }
        } 
        cout << (N==count?"Yes":"No") << endl;
    }
    return 0;
}