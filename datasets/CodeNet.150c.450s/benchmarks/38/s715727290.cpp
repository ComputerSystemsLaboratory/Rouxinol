#include<iostream>
using namespace std;

int main(){
	int N;
	int i=0;
	int hyp=0,cat=0;
	int x=0;
	
	cin >> N;
	int side[N][3];
	
	while(i<N){
		cin >> side[i][0] >> side[i][1] >> side[i][2];
		if(1<=side[i][0] && side[i][0]<= 1000){
			if(1<=side[i][1] && side[i][1]<= 1000){
				if(1<=side[i][2] && side[i][2]<= 1000)
					i++;
			}
		}
	}
	
	for(int j=0; j<i; j++){
		for(int k=0; k<3; k++){
			x = side[j][k]*side[j][k];
			if(hyp <= x){
				cat += hyp;
				hyp = x;
			}
			else
				cat += x;
		}
		if(hyp == cat)
			cout << "YES\n";
		else
			cout << "NO\n";
		hyp=0;
		cat=0;
	}
	
	return 0;
}