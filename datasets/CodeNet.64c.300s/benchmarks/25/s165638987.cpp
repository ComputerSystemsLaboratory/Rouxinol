#include <iostream>
using namespace std;

bool judgeZeroToNine(int n);
bool judgeCorr(int n[]);

int main(){
	int a[4], b[4];
	while(cin >> a[0] >> a[1] >> a[2] >> a[3]){
		while(!(judgeZeroToNine(a[0])&&judgeZeroToNine(a[1])&&
				judgeZeroToNine(a[2])&&judgeZeroToNine(a[3]))){
			cout << "wrong value\n";
			cin >> a[0] >> a[1] >> a[2] >> a[3];
		}
		cin >> b[0] >> b[1] >> b[2] >> b[3];
		while(!(judgeZeroToNine(b[0])&&judgeZeroToNine(b[1])&&
				judgeZeroToNine(b[2])&&judgeZeroToNine(b[3]))){
			cout << "wrong value\n";
			cin >> b[0] >> b[1] >> b[2] >> b[3];
		}
		
		int hit = 0, blow = 0;
		for(int i = 0;i < 4; i++){
			for(int j = 0;j < 4;j++){
				if(a[i] == b[j])
					blow++;
			}
			if(a[i] == b[i]){
				blow--;
				hit++;
			}
		}
		cout << hit << " " << blow << "\n";
	}
    return 0;
}

bool judgeZeroToNine(int n){
	if((n >= 0)&&(n <= 9))
		return true;
	else
		return false;
}

bool judgeCorr(int n[4]){
	for(int i = 0;i < 3;i++){
		for(int j = i + 1;j < 4;j++){
			if(n[i] == n[j])
				return true;
		}
	return false;
	}
}