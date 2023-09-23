#include <iostream>
using namespace std;

int main(void){
    
    while(1) {
        int n;
        cin >> n;
        if (n==0) break;
        int stone[21][21];
        for(int y=0; y<21; y++){
            for(int x=0; x<21; x++){
                stone[y][x] = 0;
            }
        }
        for(int i=0; i<n; i++){
            int x, y;
            cin >> x >> y;
            stone[y][x] = 1;
        }
        int m;
        int x=10, y=10;
        cin >> m;
        for(int i=0; i<m; i++){
            char d;
            int l;
            cin >> d;
            cin >> l;
            for(int j=0; j<l; j++) {
                if(d=='N'){ y++; }
                if(d=='E'){ x++; }
                if(d=='S'){ y--; }
                if(d=='W'){ x--; }
                if(stone[y][x] == 1) {
                    stone[y][x] = 0;
                    n--;
                }
           }
        }
        cout << (n==0 ? "Yes" : "No") << endl;
        
    }
    
}