#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

namespace shamal{
	template<typename F, typename IndexType, typename TargetType>
	IndexType lower_bound(F const& func, IndexType left, IndexType right, TargetType const& t){
		while(true){
			auto const mid = left + (right - left) / 2;
			auto const val = func(mid);
			if(val > t){
				right = mid - 1;
			}else if(val < t){
				left = mid + 1;
			}else{
				right = mid;
			}
			if(left == right)
				break;
		}
		return left;
	}
};

int search(vector<int> const& w, int n, int k, int const p){
	int offset = 0;
	int i;
	for(i = 1; i <= n; i++){
		if(w[i] - offset > p && k > 0){
			offset = w[i-1];
			--k;
			--i;
		}
	}

	return (k >= 1) && ((i-1) == n);
}

int main(void)
{
	int n, k;
	cin >> n >> k;
	vector<int> w(n+1, 0);
	for(int i = 1; i <= n; i++){
		int temp;
		cin >> temp;
		w[i] = w[i-1] + temp;
	}
	int l = 1, r = w[n];
	cout
		<< shamal::lower_bound([&](int p){return search(w, n, k, p);}, 1, w[n], 1)
		<< endl;
}