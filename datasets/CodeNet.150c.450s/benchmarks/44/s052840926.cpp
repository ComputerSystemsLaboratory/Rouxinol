#include<iostream>

using namespace std;

int hit(int *ans, int *q){
	int i, hit = 0;
	for(i = 0; i < 4; i ++){
		if(ans[i] == q[i]) hit ++;
	}
	return hit;
}

int blow(int *ans, int *q){
	int i, j, blow = 0;
	for(i = 0; i < 4; i ++){
		for(j = 0; j < 4; j  ++){
			if(ans[i] == q[j] && i != j) blow ++;
		}
	}
	return blow;
}

int main(){
	int  q[4], ans[4], i, cut1, cut2;

	while(cin >> q[0] >> q[1] >> q[2] >> q[3]){
		cut1 = 0, cut2 = 0;
		for(i = 0; i < 4; i ++){
			cin >> ans[i];
		}

		cut1 = hit(ans, q);
		cut2 = blow(ans, q);

		cout << cut1 << " " << cut2 << endl;
	}

	return 0;
}