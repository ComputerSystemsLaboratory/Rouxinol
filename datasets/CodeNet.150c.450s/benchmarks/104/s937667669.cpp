 /*
Let's play Amidakuji.

In the following example, there are five vertical lines and four horizontal lines. The horizontal lines can intersect (jump across) the vertical lines.
	
						[picture]
	
In the starting points (top of the figure), numbers are assigned to vertical lines in ascending order from left to right. At the first step, 2 and 4 are swaped by the first horizontal line which connects second and fourth vertical lines (we call this operation (2, 4)). Likewise, we perform (3, 5), (1, 2) and (3, 4), then obtain "4 1 2 5 3" in the bottom.

Your task is to write a program which reads the number of vertical lines w and configurations of horizontal lines and prints the final state of the Amidakuji. In the starting pints, numbers 1, 2, 3, ..., w are assigne to the vertical lines from left to right.
 */
 
#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;
 
int main() {
	int w; cin >> w;
	int n; cin >> n;
	int a,b;
	vector<int> ans(w);
	for (int i=0; i<w; i++)
		ans[i] = i+1;
	for (int i=0; i<n; i++) {
		scanf("%d, %d\n", &a, &b);
		swap(ans[a-1], ans[b-1]);
	}
	for (int i=0; i<w; i++)
		cout << ans[i] << endl;
	return 0;
}