#include <vector>
#include <iostream>
using namespace std;

int main(){
    int n;
    vector<int> f(101, 0);
    while (1){
	cin >> n;
	if (cin.eof()) break;
	f[n]++;
    }
    int max = 0;
    for (int i = 0; i < f.size(); i++) if (max < f[i]) max = f[i];
    for (int i = 0; i < f.size(); i++) if (f[i] == max) cout << i << endl;
}