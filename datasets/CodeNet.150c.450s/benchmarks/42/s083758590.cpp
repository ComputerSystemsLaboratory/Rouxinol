#include <iostream>
#include <stdlib.h>

#define N_MAX 99999

using namespace std;

typedef struct _a{
	char name[10];
	int time;
} P;

int main(){

	int i;
	int n;
	int q;
	int head;
	int tail;
	int res_time = 0;
	char temp[10];
	P A[N_MAX];

	cin >> n;
	cin >> q;

	for (i = 0; i < n; i++){
		cin >> A[i].name;
		cin >> A[i].time;
	}

	head = 0;
	tail = n - 1;

	while (1){
		// process
		// ??????????????´??°
		A[head].time -= q;

		// ????????????
		if (A[head].time <= 0){
			res_time += q + A[head].time;
			cout << A[head].name << ' ' << res_time << endl;
			if (tail == head){
				break;
			}
		}
		else {
			// ?????£?????´??°
			tail++;
			if (tail == N_MAX){
				tail = 0;
			}
			A[tail] = A[head];
			res_time += q;
		}

		// ?????´??°
		head++;
		if (head == N_MAX){
			head = 0;
		}
	}

	return 0;
}