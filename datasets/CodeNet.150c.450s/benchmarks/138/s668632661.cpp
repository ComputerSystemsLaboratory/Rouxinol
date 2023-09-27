
#include <bits/stdc++.h>

using namespace std;

int gcd(int x, int y){
    int a = max(x, y), b = min(x, y);
    if(a % b == 0){
	return b;
    }else{
	return gcd(a % b, b);
    }
}

int main(){
    int x, y;
    cin >> x >> y;

    cout << gcd(x, y) << endl;
}

