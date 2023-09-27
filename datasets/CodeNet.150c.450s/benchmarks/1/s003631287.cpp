#include<iostream>
#include<set>
#include<queue>
#include<algorithm>
#include<vector>

using namespace std;

int b[100001];

int main(){

    int n,temp;
    vector<int> a;
    cin >> n;
    for(int i=0;i<n;i++){
	cin >> temp;
	a.push_back(temp);
    }
    fill(b,b+n,1<<30);
    for(int i=0;i<n;i++){
	*lower_bound(b,b+n,a[i]) = a[i];
    }
    int res = 0;
	res = lower_bound(b,b+n,1<<30) - b;

    cout << res << endl;

    return 0;
}