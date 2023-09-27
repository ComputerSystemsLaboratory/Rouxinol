#include <iostream>
using namespace std;
int main(void){
    int r,c;
    cin >> r >> c;
    
    int ss[r+1][c+1];
    for(int row =0;row<r+1;row++){
        for(int col=0;col<c+1;col++){
            ss[row][col]=0;
        }
    }
    
    for(int row =0;row<r;row++){
        for(int col=0;col<c;col++){
            int val;
            cin >> val;
            ss[row][col]=val;
            ss[row][c]+=val;
            ss[r][col]+=val;
            ss[r][c]+=val;
        }
    }
    
    for(int row =0;row<r+1;row++){
        for(int col=0;col<c+1;col++){
            if(col)cout << " ";
            cout << ss[row][col];
        }
        cout << endl;
    }
    

}