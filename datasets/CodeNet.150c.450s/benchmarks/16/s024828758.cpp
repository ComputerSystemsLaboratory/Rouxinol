#include<cstdio>
#include<cstring>
#include<vector>
char s[20001];
int depth[20000], len;
int rain() {
	int i=0, left, right = 0, k;
	while (i < len && s[i] != '\\')i++;
	while (i < len && s[i] != '/')i++;
	if (i == len) return 0;
	right = i;
	while (i >= 0 && s[i] != '\\')i--;
	if (i < 0)return 0;
	left = i;
	depth[left] = 1;
	for (k = left + 1; k < right; k++)depth[k] += 2;
	depth[right] = 1;
	s[left] = '_';
	s[right] = '_';
	return right - left;
}
int main() {
	scanf("%s", s);
	len = strlen(s);
	int i, r, sum = 0;
	for (i = 0; i < len; i++)depth[i] = 0;
	while (true) {
		r = rain();
		if (r == 0)break;
		sum += r;
	}
	printf("%d\n", sum);
	sum = 0;
	std::vector<int> v;
	bool flag=false;
	for (i = 0; i < len; i++) {
		sum += depth[i];
		if (depth[i] == 1) {
			if (flag) {
				v.push_back(sum/2);
				sum = 0;
			}
			flag = !flag;
		}
	}
	if (sum > 0)v.push_back(sum/2);
	printf("%d", v.size());
	for (i = 0; i < v.size(); i++)printf(" %d", v[i]);
	printf("\n");
	return 0;
}
