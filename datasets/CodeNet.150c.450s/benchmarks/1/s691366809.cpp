#include <iostream>
#include <vector>
using namespace std;

int n;

int search(const vector<int>& d,int m,int k){
	int l = 0;
	int r = m;
	if(m==0) return l;
	else{
		if(d[0]>=k){
			return l;
		}else{
			while(l+1<r){
				int med = (l+r)/2;
				if(d[med]<k) l = med;
				else r = med;
			}
			return r;
		}
	}
}

int main(){
	while(cin >> n && n>0){
		vector<int> a(n,0);
		int length = 1;
		vector<int> L(n,0);
		for(int i=0;i<n;i++){
			cin >> a[i];
		}
		L[0] = a[0];
		for(int i=1;i<n;i++){
			if(L[length-1] < a[i]){
				L[length] = a[i];
				length++;
			}else{
				int s = search(L,length-1,a[i]);
				L[s]= a[i];
			}
		}
		cout << length << endl;
	}
}

#if 0
(11/1)自分では正しく書いているつもりですが，n=50くらいでWAになっていしまいて，原因がわかりません。ご指導していただけると嬉しいです。
(11/2)コメントありがとうございました。無事通りました。ループ不変条件には気を付けたいと思います。
#endif
