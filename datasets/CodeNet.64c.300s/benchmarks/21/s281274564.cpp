#include <bits/stdc++.h>
#define INT(name) int name; scanf("%d",&name);
#define VINT(name,n) vector<int> name(n); for(int i = 0;i < n;i++) scanf("%d",&name[i]);

using namespace std;

int main(int argc, char const *argv[]){
	int a,b,c,d,e,f;
	while(cin >> a >> b >> c >> d >> e >> f){
		cout.precision(3);
		double y = (double)(a*f-c*d)/(double)(a*e-b*d);
		double x = (double)(c-b*y)/(double)a;
		cout << std::fixed << x;
		cout << ' ' << std::fixed << y << endl;
	}
}