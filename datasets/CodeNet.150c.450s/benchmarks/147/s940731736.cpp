#include <iostream>
#include<math.h>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

#define vi vector<int>
#define vvi vector<vi>
#define rpt(i,x) for (int i = 0; i < x; i++)
#define fti(i,f,t) for (int i = f; i <= t; i++)
#define fte(i,f,t) for (int i = f; i < t; i++)
#define rptws(i,x,s) for (int i = 0; i < x; i += s)
#define llrpt(i,x) for (long long i = 0; i < x; i++)
#define llfti(i,f,t) for (long long i = f; i <= t; i++)
#define llfte(i,f,t) for (long long i = f; i < t; i++)


int main () {
	int n;
	cin>>n;

	fti(i, 1, n) {
		int ans = 0;
		llfti(x, 1, i) {
			llfti(y, 1, i) {
				long long b = x + y;
				long long c = i - (x*x) - (y*y) - (x*y);

				//cout<<i<<": "<<b<<" "<<c<<"\n";

				if (c > 0) {
					double ans1 = ((-1.0 * b) + (double)sqrt(b*b + 4.0 * c)) / 2.0;
					double ans2 = ((-1.0 * b) - (double)sqrt(b*b + 4.0 * c)) / 2.0;

					if (ans1 == (int)ans1 && ans1 >= 1.0 && ans1 == ans2) {
						//cout<<"from 1"<<"\n";
						ans++;
					}
					else if (ans1 == (int)ans1 && ans1 >= 1.0) {
						//cout<<"from 2: "<<ans1<<"\n";
						ans++;
					} 
					else if (ans2 == (int)ans2 && ans2 >= 1.0) {
						//cout<<"from 3: "<<ans2<<"\n";
						ans++;
					} 

				}
				else break;
				
			}
		} 
		cout<<ans<<"\n";
	}
}

