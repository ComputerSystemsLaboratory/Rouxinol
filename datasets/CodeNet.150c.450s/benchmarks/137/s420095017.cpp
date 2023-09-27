#include <stdio.h>
#include <string.h>
int n, r[128], t[13]; bool used[22370000]; char com[8], s[14];
int main() {
	scanf("%d", &n); r[65] = 1, r[67] = 2, r[71] = 3;
	for(int i = 2; i < 12; i++) t[i] = t[i - 1] + (1 << (2 * i - 2));
	for(int i = 0; i < n; i++) {
		scanf("%s %s", com, s);
		int h = 0, l = strlen(s);
		for(int j = 0; j < l; j++) h = h * 4 + r[s[j]];
		if(com[0] == 105) used[h + t[l]] = true;
		else puts(used[h + t[l]] ? "yes" : "no");
	}
}