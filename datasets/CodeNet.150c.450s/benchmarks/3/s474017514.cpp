#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void print(char *str, int a, int b)
{
	for (int i = a; i <= b; i++) {
		printf("%c", str[i]);
	}
	printf("\n");
}

void reverse(char *str, int a, int b) {
	char s[1024];
	strncpy( s, &str[a], b - a + 1);
	s[ b - a + 1 ] = '\0';
	int pos = b;
	for ( int i = a; i <= b; i++ ) {
		str[ pos ] = s[ i - a ];
		pos--;
	}
}

void replace(char *str, int a, int b, char *p) {
	for (int i = a; i <= b; i++) {
		str[i] = p[ i - a ];
	}

}

int main(void) {

	char sentense[1024];
	int n;
	char command[16];
	int st, ed;
	char p[1024];

	scanf("%s", sentense);
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%s", command);
		if (strcmp(command, "replace") == 0) {
			scanf("%d %d %s", &st, &ed, &p);
			replace(sentense, st, ed, p);
		} else if (strcmp(command, "reverse") == 0) {
			scanf("%d %d", &st, &ed);
			reverse(sentense, st, ed);
		} else if (strcmp(command, "print") == 0) {
			scanf("%d %d", &st, &ed);
			print(sentense, st, ed);
		}
	}


}