#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
using namespace std;

#define M 1046527
long long T[M];

class Hash
{
	long long key;
	void getKey(char *p);
	int h1() { return key % M; }
	int h2() { return 1 + (key % (M - 1)); }
	int h(int i) { return (h1() + i*h2()) % M; }
public:
	void insert(char *str);
	bool find(char *str);
};

void Hash::getKey(char *p)
{
	key = 0;
	for (int i = (strlen(p) - 1); i >= 0; i--) {
		int x = p[i] % 9;
		key += x * pow(10, i);
	}
}

void Hash::insert(char *str)
{
	getKey(str);
	int i = 0;
	while (1) {
		int j = h(i);
		if (!T[j]) {
			T[j] = key;
			return;
		}
		else if (T[j] == key) return;
		else i++;
	}
}

bool Hash::find(char *str)
{
	getKey(str);
	int i = 0;
	while (1) {
		int j = h(i);
		if (T[j] == key) return 1;
		else if (!T[j]) return 0;
		else i++;
	}
}



int main()
{
	Hash H;
	int n;
	char order[10], word[15];
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%s %s", order, word);
		switch (order[0])
		{
		case 'i':
			H.insert(word); 
			break;
		case 'f':
			if (H.find(word)) printf("yes\n");
			else printf("no\n");
			break;
		default:
			break;
		}
	}
	return 0;
}