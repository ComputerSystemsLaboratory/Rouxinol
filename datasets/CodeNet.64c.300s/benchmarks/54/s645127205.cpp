#include<stdio.h>
#include<iostream>
#include<list>
#include<map>
#include<vector>
#include<algorithm>
#include<string.h>
#define range(i,a,b) for(int i = (a); i < (b); i++)
#define rep(i,b) range(i,0,b)
#define debug(x) cout << x << endl;
using namespace std;

int main(){
    int n;
    while(cin >> n){
        long long int result[21][2] = {0};
        int input, x, y;
        rep(i, n-1){
            cin >> input;
            if(i == 0){
                result[input][0]+=1;
            }else{
                y = i % 2;
                x = (i + 1) % 2;
                rep(j,21){
                    if(result[j][x] != 0){
                        if(j + input <= 20){
                            result[j + input][y]+= result[j][x];
                        }
                        if(j - input >= 0){
                            result[j - input][y]+= result[j][x];
                        }
                        result[j][x] = 0;
                    }
                }
            }
        }
        cin >> input;
        cout << result[input][n % 2] << endl;
    }
}