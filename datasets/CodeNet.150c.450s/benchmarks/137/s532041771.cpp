#include <stdio.h>
#include <string.h>
int n, r[128]; bool used[22370000]; char com[7], s[13];
int main() {
	scanf("%d", &n); r[65] = 1, r[67] = 2, r[71] = 3;
	for(int i = 0; i < n; i++) {
		scanf("%s %s", com, s);
		int h = 0, l = strlen(s);
		for(int j = 0; j < l; j++) h = h * 4 + r[s[j]];
		h += (1 << (2 * l));
		if(com[0] == 'i') used[h] = true;
		else puts(used[h] ? "yes" : "no");
	}
}