#include <iostream>
#include <string>
#include <queue>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
#include <utility>
#include <iomanip>

#define ll long long int
#define pb push_back
#define mk make_pair
#define pq priority_queue

using namespace std;
typedef pair<int, int> P;
typedef pair<ll, int> Pl;
const int inf = 1e9;
const ll linf = 1LL << 50;

int n;
int a[10];

int main(int argc, char const* argv[])
{
	cin >> n;
	for(int i = 0; i < n; i++){
			for(int j = 0; j < 10; j++){
					cin >> a[j];
			}
			int l = 0;
			int r = 0;
			bool flag = true;
			for(int j = 0; j < 10; j++){
					if(!flag)break;
					if(a[j] <= l && a[j] <= r){
							flag = false;
					}else if(a[j] <= l && a[j] > r){
							r = a[j];
					}else if(a[j] > l && a[j] <= r){
							l = a[j];
					}else{
							if(l > r){
									l = a[j];
							}else{
									r = a[j];
							}
					}
			}
			if(!flag)cout << "NO" << endl;
			else cout << "YES" << endl;
	}
	return 0;
}

