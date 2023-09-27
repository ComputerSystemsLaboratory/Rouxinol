#include <iostream>

using namespace std;
int n, k, b[100001];
int Max = 0;
int sum = 0;

bool judge(int P){
		if(P < Max){
			return false;
		}
		int tr = 1;
		int rest = P;
		for(int i = 0; i < n; i++){
			if(rest - b[i] >= 0){
				rest = rest - b[i];
			}
			else{
				tr++;
				rest = P;
				rest = rest - b[i];
			}
		}
		if(tr <= k){
			return true;
		}
		else{
			return false;
		}
	
}

int main(){
	cin >> n >> k;
	for(int i = 0; i < n; i++){
		cin >> b[i];
		if(b[i] > Max){
			Max = b[i];
		}
		sum += b[i];
	}
	int Left = Max;
	int Right = sum;
	while(true){
		int center = (Left + Right)/2;
		if(judge(center)){
			Right = center;
		}
		else{
			Left = center + 1;
		}
		if(Left >= Right){
			cout << Left << endl;
			break;
		}
	}
	return 0;
}