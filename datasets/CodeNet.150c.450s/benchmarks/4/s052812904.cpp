#include<iostream>
using namespace std;
char evaluate(int,int,int);

int main(){
    int m,f,r;

    cin >> m >> f >> r;

    while ( m > -1 || f > -1 || r > -1 ){
        cout << evaluate(m,f,r) << endl;
        cin >> m >> f >> r;
    }
}

char evaluate(int m,int f,int r){
    char rank;
    int avg;
    avg = (m+f);
    
    if (avg >= 80 ){
        rank= 'A';
    } else if (avg >= 65){
        rank= 'B';
    } else if (avg >= 50){
        rank='C';
    } else if (avg >= 30){
        if(r >= 50){
            rank = 'C';
        } else{
            rank = 'D';
        }
    } else {
        rank = 'F';
    }

    if (m == -1 || f ==-1 ){
        rank = 'F';
    }
    return rank;
}
