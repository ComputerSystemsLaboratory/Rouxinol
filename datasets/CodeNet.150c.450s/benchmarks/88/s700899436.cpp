
#define _CRT_SECURE_NO_WARNINGS
#include<bits/stdc++.h>

using namespace std;

int taikakusen(int, int);

int main()
{
	int h, w;
	int target = 0,box=20000;
	int ibox=0, jbox = 0;

	start:

	scanf("%d %d", &h,&w);

	if (h == 0 && w==0) {
		goto finish;
	}

	target = taikakusen(h, w);

	for (int i = 1; i < 150; i++) {
		for (int j = i + 1; j <= 150; j++) {
			if (taikakusen(i, j) < target) continue;
			if (i == h && j == w) continue;
			if (taikakusen(i, j) == target && i < h) continue;
			if ((box - target) > (taikakusen(i, j) - target)) {
				box = taikakusen(i, j);
				ibox = i;
				jbox = j;
			}
		}
	}

	cout << ibox << " " << jbox << endl;

	target = 0;
	box = 20000;

	ibox = 0;
	jbox = 0;

	goto start;

	finish:

	return 0;
}

int taikakusen(int h, int w)
{
	return h * h + w * w;
}
