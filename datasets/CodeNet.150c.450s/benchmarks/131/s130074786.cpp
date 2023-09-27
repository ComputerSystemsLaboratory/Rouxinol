#include<iostream>
#include<vector>
#include<queue>
#include<cmath>
#include<algorithm>
#include<stack>
#include<map>
#include<set>
#define INF 2147483647
#define lli long long int

using namespace std;
typedef vector<int> vi;
typedef vector< vector<int> > vvi;

void printv(vi v){
	for(int i = 0; i < v.size(); i++){
		cout << v[i] << " ";
		}cout << endl;
		return ;
		}

bool check(vi list,int a){
	for (int i = 0; i < list.size(); i++){
		if (list[i] == a){
			return true;
		}
	}
	return false;
}

void vecA(vi &A,int a){
		int keta = 10;
		int tmp = a;
		for (int i = 0; i < A.size(); i++){
			A[i] = (tmp  % keta) / (keta / 10);
			tmp -= tmp % keta;
			keta *= 10;
		}
		return ;
	
}
int main() {
	while(1){
	
		int a,l; cin >> a >> l;
		if (a + l == 0) break;
		vi A(l);
		vi list(20,INF);

		vecA(A,a);

		int index_i = 0;
		bool flag = true;
		int index_j = 0;
		while( flag ){ 
			vi max(l);
			max = A;
			sort(max.begin(),max.end());
			//printv(max);

			vi min(l);
			min = A;
			sort(min.begin(),min.end());
			reverse(min.begin(),min.end());
			//printv(min);
			int keta = 1;
			int max_a = 0;
			int min_a = 0;
			list[index_i] = a;

			for (int i = 0; i < l; i++){
				max_a += max[i] * keta;
				min_a += min[i] * keta;
				a = max_a - min_a;
				keta *= 10;
			}
			//	cout << max_a << " " << min_a << endl;
			vecA(A,a);
			index_i++;
			for (int i = 0; i < list.size(); i++){
				if (list[i] == a){
					flag = false;
					index_j = i;
					break;
				}
			}
		}
		cout << index_j << " " << a << " " << index_i - index_j << endl;




	}
	
	
	return 0;

}