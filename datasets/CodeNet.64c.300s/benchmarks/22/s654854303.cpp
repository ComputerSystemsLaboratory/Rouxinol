#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int N,a[3];
    cin >> N;
    for(int i = 0 ; i < N ; i++){
	for(int j = 0 ; j < 3 ; j++){
	    cin >> a[j];
	}
	sort(a, a+3);
	cout << (a[0]*a[0]+a[1]*a[1] == a[2]*a[2] ? "YES" : "NO") << endl;
    }
    return 0;
}