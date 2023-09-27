#include <iostream>
#include <string>
using namespace std;

int main(){
	int m[100], f[100], r[100];
    int mf, ct = 0;
    char rt;
    while(true){
        cin >> m[ct] >> f[ct] >> r[ct];
        if(m[ct] == -1 && f[ct] == -1 && r[ct] == -1) break;
        ct++;
    }
    for(int i = 0; i < ct; i++){
        if(m[i] == -1 || f[i] == -1) rt = 'F';
        else{
            mf = m[i] + f[i];
            if(mf >= 80) rt = 'A';
            else if(mf >= 65) rt = 'B';
            else if(mf >= 50) rt = 'C';
            else if(mf >= 30) rt = r[i] >= 50 ? 'C' : 'D';
            else if(mf < 30) rt = 'F';
        }
        cout << rt << endl;
    }
    return 0;
}