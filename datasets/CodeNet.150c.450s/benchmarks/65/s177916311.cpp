#include <cstdio>
#include <cstring>
#include <utility>

#define MAXN 36
#define DEBUG(d,n) {for (int i = 0; i < n; i++) {\
                        if (i != n-1)   printf("%c%c ", d[i].suit, d[i].value);\
                        else            printf("%c%c", d[i].suit, d[i].value);\
                    }   printf("\n");}

using std::swap;

struct Card { char suit, value; };

void bubbleSort(Card d[], int len) {
	for (int i = 0; i < len; i++) {
		for (int j = len-1; j > i; j--) {
			if (d[j].value < d[j-1].value) {
				swap(d[j], d[j-1]);
			}
			// number of loop operations
		}
	}
}

void selectSort(Card d[], int len) {
	for (int i = 0; i < len; i++) {
		int mini = i;
		for (int j = i; j < len; j++) {
			if (d[j].value < d[mini].value) {
				mini = j;
			}
		}
		swap(d[i], d[mini]);
	}
}

void isStable(Card In[], Card Out[], int len) {
	DEBUG(Out, len);
	for (int i = 0; i < len; i++) {
		for (int j = i+1; j < len; j++) {
            if (In[i].value == In[j].value)
                for (int a = 0; a < len; a++) {
                    if (Out[a].value == In[i].value)
                        for (int b = a+1; b < len; b++) {
                            // find order is opposite
                            if (Out[a].value == Out[b].value && In[i].suit == Out[b].suit && In[j].suit == Out[a].suit) {
                                printf("Not stable\n");
                                return;
                            }
                        }
                }
		}
	}
	printf("Stable\n");
}

int main() {
	Card O[MAXN], C1[MAXN], C2[MAXN];

	int n;
	scanf("%d", &n);
	getchar();
	for (int i = 0; i < n; i++) {
		scanf("%c%c", &O[i].suit, &O[i].value);
		getchar();
	}
	//DEBUG(C1, n);
	memcpy(C1, O, sizeof(Card)*MAXN);
	memcpy(C2, O, sizeof(Card)*MAXN);

	bubbleSort(C1, n);
	isStable(O, C1, n);

	selectSort(C2, n);
	isStable(O, C2, n);

	return 0;
}

/*
5
H4 C9 S4 D2 C3
*/