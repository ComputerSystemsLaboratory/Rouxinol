#include <cstdio>

#include <vector>
#include <algorithm>

using namespace std;

int main(void) {
    vector<int> vec;
    int n_data, in;
    for (;;) {
	scanf("%d", &n_data);
	if (n_data == 0)
	    return 0;

	for (int i = 0; i < n_data; ++i) {
	    scanf ("%d", &in);
	    vec.push_back(in);
	}
	sort(vec.begin(), vec.end());

	int ave = 0;
	for (auto it = vec.begin() + 1; it < vec.end() - 1; ++it)
	    ave += *it;
	printf("%d\n", ave / (n_data - 2));
	vec.clear();
    }
}