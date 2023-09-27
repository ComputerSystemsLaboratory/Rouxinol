#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int year(int n){
    int res = 0;
    n++;
    for(; n<1000; n++){
        if(n%3 != 0) res++; 
    }
    return res;
}
int month(int y, int m){
    int res = 0;
    if(y%3 == 0) return 0;
    for(; m<=10 ;m++)
        if(m%2 == 0) res++;
    return res;
}

int main(){
    int N;
    cin >> N;

    int y, m, d;
    int res = 0;
    for(int i=0; i<N; i++){
        cin >> y >> m >> d;
        res = ((999-y)*20*10 + (10-m)*20 + (20-d));
        res -= year(y)*5 + month(y, m)  ; 
        res++;
        cout << res << endl;
    }
}