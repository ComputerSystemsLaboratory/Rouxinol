#include<cstdio>
#include<queue>
using namespace std;
int main(){
	int n, tmp, top;
	queue<int> q;
	scanf("%d", &n);
	while(n--){
		top = 1;
		while (!q.empty()) q.pop();
		bool flag = true;
		for(int i = 0; i < 10; i++){
			scanf("%d", &tmp);
			if (tmp == top){
				top++;
				continue;
			}
			if (!q.empty() && q.front() == tmp){
				q.pop();
				continue;
			}
			if (tmp < top){
				flag = false;
				break;
			}
			while (top != tmp){
				q.push(top);
				top++;
			}
			top++;
		}
		if (flag) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}