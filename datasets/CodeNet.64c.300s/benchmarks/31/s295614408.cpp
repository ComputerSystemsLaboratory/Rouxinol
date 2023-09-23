#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int mem[31] = {};
    int x;
    for(int i = 1; i <= 28; i++){
        cin >> x;
        mem[x]++;
    }
    for(int i = 1; i <= 30; i++){
        if(mem[i] == 0){
            cout << i << endl;
        }
    }
}