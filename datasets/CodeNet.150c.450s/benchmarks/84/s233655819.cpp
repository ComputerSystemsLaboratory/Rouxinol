#include<iostream>
#include<utility>

using namespace std;

int A[200000];
int B[200000];

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	long long cnt=0;
	cin>>n;
	for(int i=0; i<n; i++) cin>>A[i];

	int* p=A;
	int* q=B;
	for(int d=1; d<n; d*=2) {
		std::swap(p, q);
		int l=0, m=0, r=0;
		while(r<n) {
			l=r;
			m=std::min(r+d, n);
			r=std::min(r+d+d, n);
			int i, j, k;
			i=k=l;
			j=m;
			while(i<m&&j<r) {
				if(q[i]<=q[j]) p[k++]=q[i++];
				else {
					cnt+=j-k;
					p[k++]=q[j++];
				}
			}
			while(i<m) p[k++]=q[i++];
			while(j<r) {
				cnt+=j-k;
				p[k++]=q[j++];
			}
		}
	}
	cout<<cnt<<'\n';
	return 0;
}

