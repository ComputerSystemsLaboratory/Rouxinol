#include <cstdio>
#include <string.h>
using namespace std;

char w[16], t[1024];

bool lower(char* a) {
	int p = 0;
	while (a[p] != '\0') {
		if (a[p] >= 'A' &&a[p] <= 'Z') {
			a[p] -= ('A' - 'a');
		}
		p++;
	}
	return true;
}

int main(){
	int c = 0;
	scanf("%s", w);
	lower(w);
	while (scanf("%s", t), strcmp(t, "END_OF_TEXT") != 0) {
		lower(t);
		if (strcmp(w, t) == 0) {
			c++;
		}
	}
	printf("%d\n", c);
	
	return 0;
}