#include<iostream>
using namespace std;

int main(){
	int A[4];
	int B[4];
	int hit;
	int blow;
	while(cin >> A[0] >> A[1] >> A[2] >> A[3]){
		hit = 0;
		blow = 0;
		cin >> B[0] >> B[1] >> B[2] >> B[3];
		for(int i=0;i<4;i++){
			if(A[i] == B[i]){
				hit += 1;
			}
		}
		for(int i=0;i<4;i++){
			for(int j=0;j<4;j++){
				if(i != j && A[i] == B[j]){
					blow += 1;
				}
			}
		}
		cout << hit << " " << blow << endl;
	}
	return 0;
}