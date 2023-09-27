#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef long long lli;
typedef vector<lli> vll;
typedef pair<char,lli> pcl;
typedef vector<pcl> vec;

lli partition(vec& a,lli p,lli r){
	lli x = a[r].second;
	lli i = p;
	for(lli j = p;j < r;j++){
		if(a[j].second <= x){
			swap(a[j],a[i++]);
		}
	}
	swap(a[i],a[r]);
	return i;
}

void qsort(vec& a,lli p,lli r){
	if(p < r){
		lli q = partition(a,p,r);
		qsort(a,p,q-1);
		qsort(a,q+1,r);
	}
}


lli n;
vec a;
vec b;

void output(){
	for(lli i = 0;i < n;i++) cout << a[i].first << " " << a[i].second << endl;
}
int main(){
	cin >> n;
	a = vec(n);
	for(lli i = 0;i < n;i++) cin >> a[i].first >> a[i].second;
	b = a;
	qsort(a,0,n-1);
	stable_sort(b.begin(),b.end(),[](pcl a,pcl b){
		return a.second < b.second;
	});
	for(lli i = 0;i < n;i++){
		if(a[i].first != b[i].first){
			cout << "Not stable" << endl;
			output();
			return 0;
		}
	}
	cout << "Stable" << endl;
	output();
	return 0;

}