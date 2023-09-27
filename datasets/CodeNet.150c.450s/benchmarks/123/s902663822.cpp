
#include <bits/stdc++.h>

using namespace std;

bool isprime(int n){
    if(n > 2 && n % 2 == 0) return false;
    if(n > 3 && n % 3 == 0) return false;
    int x = ((int)sqrt(n)) + 1;
    bool f = 0;
    for(int i = 5; i <= x; i++){
	if(n % i == 0) return false;
    }
    return true;
}

int main(){
    int n;
    cin >> n;
    vector<int> V(n);
    for(int i = 0; i < n; i++){
	cin >> V.at(i);
    }
    int sum = 0;
    for(int v: V){
	if(isprime(v)){
	    sum++;
	}
    }
    cout << sum << endl;
}

