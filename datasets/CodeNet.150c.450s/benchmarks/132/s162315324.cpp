#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<cstdlib>
#define unsigned long long 
#define rep(i,a,b) for(ull (i)=(a);(i)<(b);i++)
using namespace std;
int n, p, man[60], wan;


int main(void){
	while (true){
		memset(man, 0, sizeof(man));
		cin >> n >> p;
		if (n == 0)return(0);
		wan = p;
		int i = 0;
		while (true){
			if (wan > 0){
				man[i]++;
				wan--;
				if (man[i] == p)break;
			}
			else
			{
				wan = man[i];
				man[i] = 0;
			}

			i = (i + 1) % n;
		}
		cout << i << endl;



	}



}