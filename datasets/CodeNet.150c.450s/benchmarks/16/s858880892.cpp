/*
** 本题使用两个stack，一个用来统计总积水，一个用来统计单独的积水面积。
*/

# include <cstdio>
# include <stack>
# include <vector>
using namespace std;

static const int maxn = 20000 + 10;

char buff[maxn];

int main() {
	// freopen("data.in", "r", stdin);
	// freopen("data.out", "w", stdout);
	while (scanf("%s", buff) != EOF) {
		/*
		** ts用来存储每一个'\'字符的位置，然后当出现'/'字符的时候，通过距离计算积水面积
		** ps用来存储每一个'\'所对应的积水面积，默认是0，当出现'/'后，再把面积加进去
		*/
		stack <int> ts, ps;
		int sum = 0;
		for (int i = 0; buff[i] != '\0'; i++) {
			if (buff[i] == 92) { // 92 是 '\'的 ascii码值
				ts.push(i);
				ps.push(0);
			}
			else if (buff[i] == 47 && !ts.empty()) { // 47 是 '/'的 ascii码值
				int s = i - ts.top(); ts.pop();
				sum += s;
				while (ps.top() != 0) {
					s += ps.top();
					ps.pop();
				}
				ps.pop();
				ps.push(s);
			}
		}
		
		printf("%d\n", sum);
		vector <int> v;
		while (!ps.empty()) {
			if (ps.top() != 0)
				v.push_back(ps.top());
			ps.pop();
		}
		if (v.size() == 0)
			printf("0\n");
		else {
			printf("%d ", v.size());
			for (int i = v.size()-1; i > 0; i--)
				printf("%d ", v[i]);
			printf("%d\n", v[0]);
		}
	}
	return 0;
}
