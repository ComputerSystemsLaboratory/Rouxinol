#include<bits/stdc++.h>
#define REP(i,n) for(int i = 0; i < n; i++)

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> P;

int cnt=0;

void merge(int a[], int left,int mid, int right)
{
	int n1 = mid-left;
	int n2 = right-mid;
	vi l;
	vi r;
	REP(i,n1)l.push_back(a[left+i]);
	REP(i,n2)r.push_back(a[mid+i]);
	l.push_back(INT_MAX);
	r.push_back(INT_MAX);
	int i = 0;
	int j = 0;
	for(int k = left; k < right; k++){
		if(l[i] <= r[j]){
			a[k] = l[i];
			i++;
		}else{
			a[k] = r[j];
			j++;
		}
		cnt++;
	}
	return;
}

void mergeSort(int a[], int left, int right)
{
	if(left+1 < right){
		int mid = (left+right)/2;
		mergeSort(a,left,mid);
		mergeSort(a,mid,right);
		merge(a,left,mid,right);
	}
	return;
}

int main(void)
{
	int n;
	int s[500000];
	cin >> n;
	REP(i,n) cin >> s[i];

	mergeSort(s,0,n);
	REP(i,n-1) cout << s[i] << ' ';
	cout << s[n-1] << endl;
	cout << cnt << endl;

        return 0;
}