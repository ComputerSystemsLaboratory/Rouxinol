#include<iostream>
#include<algorithm>
#include<cmath>

using namespace std;

int taxchange(int val, int x){
    return (int)ceil((val * 100) /(100.0+x));
}

int main() {
    int x, y, s;
    int maxim;
    for(;;){
        cin >> x >> y >> s;
        if(x == 0) break;
        maxim = 0;
        for(int i=1 ; i<s ; i++){
            if((taxchange(i,x)*(100+x))/100 != i) continue;
            if((taxchange(s-i,x)*(100+x))/100 != s-i) continue;
            maxim = max(maxim,(taxchange(i,x)*(100+y))/100 + (taxchange(s-i,x)*(100+y))/100 );
        }
        cout << maxim << endl;
    }
    return 0;
}

