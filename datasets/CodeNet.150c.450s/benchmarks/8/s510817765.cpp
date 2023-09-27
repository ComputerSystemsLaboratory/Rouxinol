#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cctype>
#include <stdio.h>
using namespace std;
int main() {
    int n;
    string Ya, Ha;
    int Yscore = 0, Hscore = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> Ya >> Ha;
        if(Ya > Ha) {
            Yscore += 3;
        }else if(Ya < Ha){
            Hscore += 3;
        }else if(Ya == Ha){
            Yscore++;
            Hscore++;
        }
    }
    cout << Yscore << " " << Hscore << endl; 
    return 0;
}