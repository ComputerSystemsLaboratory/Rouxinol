#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <functional>
#include <numeric>
#include <stack>
using namespace std;

#define FOR(i,a,b) for(long long int i=(a);i<(b);i++)
#define REP(i,n) for(long long int i=0;i<(n);i++)
#define ALL(s) (s).begin(),(s).end()

#define PI 3.14159265358479

typedef long long ll;
typedef vector<long long int> vi;
typedef vector<long long int>::iterator vit;

int main(){
	int h = 0, v = 0;
	int a[5], b[5];
	while (cin  >>a[0] >> a[1] >> a[2] >> a[3] >> b[0] >> b[1] >> b[2] >> b[3]){
		REP(i,4){
			REP(j, 4){
				if (b[i] == a[j]){
					v++;
					if (i == j){
						v--;
						h++;
					}
				}
			}
		}
		cout << h << " " << v << endl;
		h = v = 0;
	}
}