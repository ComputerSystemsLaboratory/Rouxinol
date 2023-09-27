#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	int n, m;
	int a[100], b[100];
	while(true){
		cin >> n >> m;
		if(!(n||m)) break;
		int s1 = 0, s2 = 0;
		for(int i=0;i<n;i++) { cin >> a[i]; s1 += a[i]; }
		for(int i=0;i<m;i++) { cin >> b[i]; s2 += b[i]; }
		if((s1-s2)&1) { cout << -1 << endl; continue; }
		sort(a, a+n); sort(b, b+m);
		int diff = (s2-s1)/2;
		int a1 = -1, a2 = -1;
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				if(a[i]+diff == b[j]) { a1 = a[i]; a2 = b[j]; break; }
			}
			if(a1!=-1) break;
		}
		if(a1 != -1) cout << a1 << " " << a2 << endl;
		else           cout << -1 << endl;
	}
}