#include <cstdio>
#include <stack>
#include <vector>
using namespace std;

int main()
{
	stack<int> nums;
	stack<pair<int, int> > area;
	
	char s[20010]; scanf("%s",s);
	
	int sum = 0;
	for(int i = 0; s[i] != '\0'; ++i) {
		if(s[i] == '\\') {
			nums.push(i);
		} else if(s[i] == '/' && !nums.empty()) {
			int begin = nums.top(); nums.pop();
			int s = i-begin;
			sum += s;
			while(!area.empty() && begin < area.top().first) {
				s += area.top().second;
				area.pop(); 
			}
			area.push(make_pair(begin, s));
		}
	}
	
	vector<int> ans;
	while(!area.empty()) {
		ans.push_back(area.top().second);
		area.pop();
	}
	
	printf("%d\n%d",sum,ans.size());
	for(int i = ans.size()-1; i >= 0; --i) {
		printf(" %d",ans[i]);
	}
	putchar('\n');
	return 0;
}

