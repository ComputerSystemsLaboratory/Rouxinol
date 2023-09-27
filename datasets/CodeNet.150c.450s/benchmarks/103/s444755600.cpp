#include <iostream>
using namespace std;

int visit(int n, int s, int x){
    int sum=0;
    if(n==0 && s==0)    return 1;
    if(n>0){
        for(int i=x; i<10; i++){
            if(s-i>=0)  sum+=visit(n-1, s-i, i+1);
        }
    }
    return sum;
}

int main(void){
    int n, s;
    while(cin >> n >> s){
        if(n==0 && s==0)    break;
        cout << visit(n, s, 0) << endl;
    }
    return 0;
}
