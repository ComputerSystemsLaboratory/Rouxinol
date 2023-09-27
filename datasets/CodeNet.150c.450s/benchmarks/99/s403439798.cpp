#include <iostream>
#include <string>
#include <cstdlib>
#include <cctype>
using namespace std;

char mcxi[5] = "mcxi";

void showMCXI(int m[]){
    for(int i = 0; i < 4; i++){
        switch (m[i]) {
            case 0: break;
            case 1: cout << mcxi[i]; break;
            default: cout << m[i] << mcxi[i]; break;
        }
    }
    cout << endl;
}

void addMCXI(int ans[], int m1[], int m2[]){
    for(int i = 3; i >= 0; i--){
        ans[i] += m1[i] + m2[i];
        if(ans[i] > 9){
            ans[i-1]++; ans[i] %= 10;
        }
    }
}

void putArray(int digit[], string str){
    for(int i = 0; i < 4; i++){
        int idx = str.find(mcxi[i]);
        if(idx == -1){
            digit[i] = 0;
        } else if(idx == 0 || !isdigit(str[idx-1])){
            digit[i] = 1;
        } else {
            digit[i] = atoi(&str.c_str()[idx-1]);
        }
    }
}

int main(int argc, const char * argv[]) {
    int n; cin >> n;
    while(n--){
        string input1, input2;
        cin >> input1 >> input2;
        
        int d1[4] = {0}, d2[4] = {0}, ans[4] = {0};
        putArray(d1, input1);
        putArray(d2, input2);
        addMCXI(ans, d1, d2);
        showMCXI(ans);
    }
}