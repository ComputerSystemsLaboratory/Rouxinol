#include<iostream>
#include<string.h>
#include<vector>
#include<list>
#include<stdio.h>
#include<math.h>
#include<iomanip>
#include<map>
#include<stack>
#include<queue>
#define range(i,a,b) for(int i = (a); i < (b); i++)
#define rep(i,b) range(i,0,b)
#define debug(x) cout << "debug " << x << endl;
using namespace std;

int main(){
    double x, y, pri;
    while(cin >> x >> y >> pri, x||y||pri){
        int max = 0;
        double xt = x / 100 + 1;
        double yt = y / 100 + 1;
        for(double i = 1; i < pri; i++){
            for(double j = i; j < pri; j++){
                if(i + j > pri) break;
                int a = i * xt + 0.000001;
                int b = j * xt + 0.000001;;
                int beforePrice = a + b;
                if(beforePrice == pri){
                    int c = i * yt + 0.000001;;
                    int d = j * yt + 0.000001;;
                    int afterPrice = c + d;
                    if(max < afterPrice) max = afterPrice;
                }
            }
        }
        cout << max << endl;
    }
}