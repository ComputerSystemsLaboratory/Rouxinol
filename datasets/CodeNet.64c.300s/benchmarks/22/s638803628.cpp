#include <iostream>
using namespace std;
#define max(x, y) ((x) > (y) ? (x) : (y))
#define min(x, y) ((x) < (y) ? (x) : (y))

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++){
		int x, y, z;
		cin >> x >> y >> z;
		int ma = max(x, max(y, z));
		int mi = min(x, min(y, z));
		int cen = (ma != x && mi != x ? x : ma != y && mi != y ? y : z);
		if (ma * ma == mi * mi + cen * cen){
			cout << "YES" << "\n";
		}else{
			cout << "NO" << "\n";
		}
	}
	cout.flush();
}