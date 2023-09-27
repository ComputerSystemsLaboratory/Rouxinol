#include<cstdio>
int main() {
	int face[6], i = 0, tmp;
	char cmd[101];
	scanf("%d%d%d%d%d%d%s", &face[0], &face[1], &face[2], &face[3], &face[4], &face[5], cmd);
	while (cmd[i] != '\0') {
		if (cmd[i] == 'N') {
			tmp = face[0];
			face[0] = face[1];
			face[1] = face[5];
			face[5] = face[4];
			face[4] = tmp;
		}
		else if (cmd[i] == 'S') {
			tmp = face[0];
			face[0] = face[4];
			face[4] = face[5];
			face[5] = face[1];
			face[1] = tmp;
		}
		else if (cmd[i] == 'E') {
			tmp = face[0];
			face[0] = face[3];
			face[3] = face[5];
			face[5] = face[2];
			face[2] = tmp;
		}
		else {
			tmp = face[0];
			face[0] = face[2];
			face[2] = face[5];
			face[5] = face[3];
			face[3] = tmp;
		}
		i++;
	}
	printf("%d\n", face[0]);
	return 0;
}
