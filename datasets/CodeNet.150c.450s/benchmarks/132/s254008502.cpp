#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

int main(void){
    int n,q,w;
    int i;
    int p[50];
    while(true){
        cin >> n >> q;
        if(n == 0) break;
        for(i = 0;i < 50;i++) p[i] = 0;
        i = 0;w = q;
        while(true){
            if(w){
                p[i]++;
                w--;
            }
            else{
                if(p[i] == q){
                    cout << i << endl;
                    break;
                }
                else{
                    w = p[i];
                    p[i] = 0;
                }
            }
            i = (i+1)%n;
        }
    }
}