//$g++ main.cpp - compile
//$./a.out - run
#include <iostream>
#include <string>
using namespace std;

int main(){
    int r, c, sum_row, max = 100;
    int data[max][max];
    int sum_column[max + 1];
    for(int i = 0; i < max; i++){
        sum_column[i] = 0;
    }
    cin >> r >> c;
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            cin >> data[i][j];
        }
    }
    for(int i = 0; i < r; i++){
        sum_row = 0;
        for(int j = 0; j < c; j++){
            cout << data[i][j] << " ";
            sum_row += data[i][j];
            sum_column[j] += data[i][j];
        }
        cout << sum_row << endl;
        sum_column[c] += sum_row;
    }
    for(int i = 0; i < c + 1; i++){
        if(i != 0) cout << " ";
        cout << sum_column[i];
    }
    cout << endl;
}