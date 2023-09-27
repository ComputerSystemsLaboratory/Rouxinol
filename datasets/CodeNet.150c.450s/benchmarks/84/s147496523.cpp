#include <iostream>
#include <vector>

using namespace std;

long merge_invcount(vector<int>& v)
{
	long n = v.size();
	if (n <= 1) return 0;

	long count = 0;
	vector<int> left(v.begin(), v.begin() + n / 2);
	vector<int> right(v.begin()+n/2, v.end());
	count += merge_invcount(left);
	count += merge_invcount(right);

	long index_v = 0;
	long index_left = 0;
	long index_right = 0;
	while (index_v < n) {
		if (index_left < left.size() && (index_right == right.size() || left[index_left] <= right[index_right])) {
			v[index_v] = left[index_left];
			index_v++;
			index_left++;
		}
		else {
			count += n / 2 - index_left;
			v[index_v] = right[index_right];
			index_v++;
			index_right++;
		}
	}

	return count;
}

int main()
{
	int n;
	cin >> n;

	vector<int> numbers;
	for (int i = 0; i < n; i++) {
		int num;
		cin >> num;
		numbers.push_back(num);
	}

	long Answer = merge_invcount(numbers);
	cout << Answer << endl;

	return 0;
}
