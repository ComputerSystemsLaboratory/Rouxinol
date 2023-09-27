#include <stdio.h>
#include <string.h>
int n; bool used[22370000]; char com[7], s[13];
int main() {
	scanf("%d", &n);
	for(int i = 0; i < n; i++) {
		scanf("%s %s", com, s);
		int h = 0, l = strlen(s);
		for(int j = 0; j < l; j++) {
			h *= 4;
			if(s[j] > 'A') h++;
			if(s[j] > 'C') h++;
			if(s[j] > 'G') h++;
		}
		h += (1 << (2 * l));
		if(com[0] == 'i') used[h] = true;
		else puts(used[h] ? "yes" : "no");
	}
}