#include<iostream>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<vector>
using namespace std;
const int MAXN=1000001;
bool p[MAXN];
vector<int> a;
int main(){
	memset(p,false,sizeof(p));
	for (int i=2;i<sqrt(MAXN);i++)
		for (int j=i+i;j<MAXN;j+=i)
			p[j]=true;
	for (int i=2;i<MAXN;i++)
		if (!p[i])
			a.push_back(i);
	int n;
	while (cin >> n){
		vector<int>::iterator f=lower_bound(a.begin(),a.end(),n);
		if (*f==n)
			cout << f-a.begin()+1 << endl;
		else
			cout << f-a.begin() << endl;
	}
	return 0;
}