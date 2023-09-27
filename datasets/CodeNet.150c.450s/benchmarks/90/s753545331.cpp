#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    vector<int> v(101, 0);
    int x,m = 0;
    while(cin >> x){
	v[x]++;
	m = max(m, v[x]);
    }
    for(int i = 1 ; i <= 100 ; i++){
	if(m == v[i]){
	    cout << i << endl;
	}
    }
    return 0;
}