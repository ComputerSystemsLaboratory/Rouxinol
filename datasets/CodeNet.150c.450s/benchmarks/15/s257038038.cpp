#include <iostream>
using namespace std;

int main() {
	cin.tie(0);
    ios::sync_with_stdio(false);
    
	int n,q,r = 0;
	
	cin >> n;
	int s[n];
	for(int i = 0;i < n;i++){
		cin >> s[i];
	}
	cin >> q;
	int t[n];
	for(int i = 0;i < q;i++){
		cin >> t[i];
	}
	
	for(int i = 0;i < n;i++){
		for(int j = 0;j < q;j++){
			if(s[i] == t[j]){
				r++;
				t[j] = -114514;
			}
		}
	}
    
    cout << r << "\n";
    
    return 0;
}