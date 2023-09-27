#include<iostream>
using namespace std;

int main(){
    
    int r,c;
    cin >> r >> c;
    int sheet[r+1][c+1];
    for(int i=0; i<r; i+=1){
        int sum=0;
        for(int j=0; j<c; j+=1){
            int value;
            cin >> value;
            sheet[i][j] = value;
            sum += value;
        }
        sheet[i][c] = sum;
    }
    
    for(int j=0; j<c+1; j+=1){
        int sum=0;
        for(int i=0; i<r; i+=1){
            sum += sheet[i][j];
        }
        sheet[r][j] = sum;
    }
    
    for(int i=0; i<r+1; i+=1){
        for(int j=0; j<c+1; j+=1){
            cout << sheet[i][j];
            if(j==c) break;
            cout << " ";
        }
        cout << endl;
    }
    return 0;
}
