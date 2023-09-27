#include <iostream>
#include <vector>

using namespace std;

int main(){
    int w,n,a,b;
    char c;
    cin >> w >> n;
    vector<int> v;
    for(int i = 0 ; i < w ; i++){
	v.push_back(i+1);
    }
    for(int i = 0 ; i < n ; i++){
	cin >> a >> c >> b;
	a--; b--;
	swap(v[a],v[b]);
    }
    for(int i = 0 ; i < w ; i++){
	cout << v[i] << endl;
    }
    return 0;
}