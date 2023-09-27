#include<iostream>
#include<set>
#include<queue>
#include<algorithm>
#include<vector>

using namespace std;

int main(){

    int fib[45];
    fib[0] = 1;
    fib[1] = 1;
    int n;
    cin >> n;
    for(int i=0;i<n-1;i++){
	fib[i+2] = fib[i+1] + fib[i];
    }
    cout << fib[n] << endl;

    return 0;
}