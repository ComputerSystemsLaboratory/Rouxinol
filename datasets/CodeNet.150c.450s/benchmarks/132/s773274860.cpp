#include <bits/stdc++.h>
using namespace std;

int field, hand[50];

int main()
{
	int n, p;
	while (scanf("%d %d", &n, &p), n + p){
		field = p;
		memset(hand, 0, sizeof(hand));
		
		int now = 0;
		int res = 0;
		while (true){
			if (field > 0){
				field--;
				hand[now]++;
				
				if (field == 0 && hand[now] == p){
					res = now;
					break;
				}
			}
			else {
				field += hand[now];
				hand[now] = 0;
			}
			
			now = (now + 1) % n;
		}
		
		printf("%d\n", now);
	}
	
	return 0;
}