#include<iostream>

using namespace std;

int main()
{
	int n;
	int a[20000], b[20000];
	int a_score;
	int b_score;
	int score_stock[20000][2];
	int i, j;
	for(j = 0;;j++){
		a_score = 0;
		b_score = 0;
		cin >> n;		//J[hÌ
		if(n == 0){
			break;
		}
		
		for(i = 0;i < n; i++){
			cin >> a[i];
			cin >> b[i];
		}
		
		for(; i > -1; i--){
			if(a[i] > b[i]){
				a_score += a[i] + b[i];
			}
			else if(a[i] < b[i]){
				b_score += a[i] + b[i];
			}
			else{
				a_score += a[i];
				b_score += b[i];
			}
		}
		score_stock[j][0] = a_score;
		score_stock[j][1] = b_score;
	}
	for(i = 0; i < j; i++){
		cout << score_stock[i][0] << " "<<score_stock[i][1] << endl;
	}
}