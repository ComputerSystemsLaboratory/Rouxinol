#include <iostream>
#include <vector>
#include <bitset>
#include <map>
#include <list>
#include <string>
#include <algorithm>
#include <stack>
#include <queue>
#include <tuple>
#include <utility>

#include <cstdio>
#include <cstdint>

using namespace std;

namespace shamal{
	template<typename F, typename IndexType, typename TargetType>
	pair<bool, IndexType> lower_bound(F const& func, IndexType left, IndexType right, TargetType const& t){
		while(left <= right){
			auto const mid = left + (right - left) / 2;
			auto const val = func(mid);
			if(val > t){
				right = mid - 1;
			}else if(val < t){
				left = mid + 1;
			}else{ //if(left == right)
				right = mid;
			}
		}

		return {func(left) == t, left};
	}

	template<typename F, typename IndexType, typename TargetType>
	pair<bool, IndexType> binary_search(F const& func, IndexType left, IndexType right, TargetType const& t){
		while(left <= right){
			auto const mid = left + (right - left) / 2;
			auto const val = func(mid);
			if(val > t){
				right = mid - 1;
			}else if(val < t){
				left = mid + 1;
			}else{ //if(left == right)
				return {true, mid};
			}
		};

		return {false, left};
	}
};


bool search(int const n, vector<int> const& q, int const bp, int const t){
	if(n == t)
		return true;
	if(bp >= q.size())
		return false;
	return search(n, q, bp+1, t) || search(n + q[bp], q, bp+1, t);
}

int main(void)
{
	int n0, n1;
	cin >> n0;
	vector<int> v0(n0);
	for(int i = 0; i < n0; i++)
		cin >> v0[i];
	sort(v0.begin(), v0.end());
	v0.push_back(0);

	cin >> n1;
	for(int i = 0; i < n1; i++){
		int temp;
		cin >> temp;
		cout << (search(0, v0, 0, temp) ? "yes" : "no" )<< endl;
	}

	return 0;
}