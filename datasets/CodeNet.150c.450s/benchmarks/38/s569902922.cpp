#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <sstream>
#include <cmath>
 
using namespace std;

int N;
int a, b, c;

int main(){
    scanf("%d", &N);
    for(int i= 0; i <N; ++i) {
        cin >> a >> b >> c;   
        string ans;
        if (a > b && a > c){
            ans = pow(a,2) == pow(b,2) + pow(c,2) ? "YES" : "NO";
        } else if (b > a && b > c){
            ans = pow(b,2) == pow(a,2) + pow(c,2) ? "YES" : "NO";
        }else {
            ans = pow(c,2) == pow(a,2) + pow(b,2) ? "YES" : "NO";
    }
    cout << ans << endl;
    }
}
       
    