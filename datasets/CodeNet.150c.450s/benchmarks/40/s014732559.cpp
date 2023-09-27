#include <iostream>
using namespace std;
#include <stdio.h>
void ushm(char x);
struct sai {
	int dicet[3][2];
	int diceus[2], dicemh[2];
	int dicenow;
};
struct sai a = { { 1, 6, 2, 5, 3, 4 },{ 5, 2 },{ 4, 3 }, 1 };
int main()
{
	int	atai[6], i;
	char houi[101];
	for (i = 0; i < 6; i++) { cin >> atai[i]; }
	cin >> houi;
	for (i = 0; i <= 100 && houi[i] != '\0'; i++) {
		ushm(houi[i]);
	}
	printf("%d\n", atai[a.dicenow - 1]);
	return 0;
}
void ushm(char x)
{
	int now = a.dicenow, nowt, i;
	for (i = 0; i < 3; i++)
	{
		if (a.dicet[i][0] == now)
			nowt = a.dicet[i][1];
		else if (a.dicet[i][1] == now)
			nowt = a.dicet[i][0];
	}
	switch (x) {
	case 'N': a.dicenow = a.diceus[1]; a.diceus[0] = now; a.diceus[1] = nowt; break;
	case 'S': a.dicenow = a.diceus[0]; a.diceus[1] = now; a.diceus[0] = nowt; break;
	case 'W': a.dicenow = a.dicemh[1]; a.dicemh[0] = now; a.dicemh[1] = nowt; break;
	case 'E': a.dicenow = a.dicemh[0]; a.dicemh[1] = now; a.dicemh[0] = nowt; break;
	}
}