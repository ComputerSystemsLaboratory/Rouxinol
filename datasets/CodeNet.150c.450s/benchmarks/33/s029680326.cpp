#include <iostream>
using namespace std;

int tax(int a, int t){
    int p;
    p = a*(100+t)/100;
    return p;
}

int main(){
    int x,y,s;
    while (cin >> x >> y >> s && s>0){
        int m = 0;
        for (int i=1; i<s; ++i){
               for (int j=1; j<s; ++j){
                   if (tax(i,x) + tax(j,x) == s){
                       m = max(m, tax(i,y) + tax(j,y));}
               }
           }
        cout << m << endl ;
    }
}