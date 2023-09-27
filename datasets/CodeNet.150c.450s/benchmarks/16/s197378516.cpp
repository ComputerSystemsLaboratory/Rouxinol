#include<iostream>
using namespace std;

int height[20010];
char c[20010];
int lakenum = 0,lakeS[10010];
int getS(int, int);

int main() {
	//input
	int i = 0,n;
	while (cin >> c[i]) {
		i++;
	}
	n = i;

	height[0] = 0;
	for (int i = 1; i <= n; i++) {
		switch (c[i-1]) {
		case'/':
			height[i] = height[i - 1] + 1;
			break;
		case'\\':
			height[i] = height[i - 1] - 1;
			break;
		case'_':
			height[i] = height[i - 1];
			break;
		}
	}

	//debug
	//for (int i = 0; i <= n; i++) cerr << height[i] << " ";

	//research
	for (int i = 0; i < n; i++) {
		bool islake = false;
		int next;
		int h = height[i];
		int j = i + 1;
		if (height[j] == h) continue;
		j++;
		while (j <= n) {
			if (height[j] == h  && height[i+1] == h-1) {
				next = j;
				lakeS[lakenum++] = getS(i, next);
				islake = true;
				//cerr << "lake" << lakenum << ": " << i << " to " << next << " S:" << getS(i,next) << endl;
				break;
			}
			j++;
		}
		if (islake) i = next-1;
	}

	int sumS = 0;
	for (int i = 0; i < lakenum; i++) sumS += lakeS[i];
	cout << sumS << endl;
	cout << lakenum ;
	if (lakenum != 0) cout << " ";
	else cout << endl;
	for (int i = 0; i < lakenum; i++) {
		cout << lakeS[i];
		if (i == lakenum - 1) cout << endl;
		else cout << " ";
	}
	


	return 0;
}

int getS(int first, int last) {
	int h = height[first];
	int s2 = 0;
	for (int i = first; i < last; i++) {
		s2 += (h - height[i]) + (h - height[i + 1]);
	}
	return s2 / 2;
}