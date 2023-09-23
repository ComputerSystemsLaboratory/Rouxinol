#include<iostream>
using namespace std;

void Grade(int m, int f, int r);

int main(){
    int m[50], f[50], r[50];
    int i = 0;
    
    while(1){
        cin >> m[i] >> f[i] >> r[i];
        if(m[i] == -1 && f[i] == -1 && r[i] == -1) break;
        i++;
    }
    
    for(int j = 0; j < i; j++){
        Grade(m[j], f[j], r[j]);
    }
    return 0;
}

void Grade(int m, int f, int r){
    if(m == -1 || f == -1) cout << 'F' << endl;
    else if(m + f >= 80) cout << 'A' << endl;
    else if(m + f >= 65 && m + f < 80) cout << 'B' << endl;
    else if(m + f >= 50 && m + f < 65) cout << 'C' << endl;
    else if(m + f >= 30 && m + f < 50){
        if(r >= 50) cout << 'C' << endl;
        else cout << 'D' << endl;
    }else if(m + f < 30) cout << 'F' << endl;
}
