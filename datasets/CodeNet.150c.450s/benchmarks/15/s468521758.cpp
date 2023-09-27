#include <iostream>
#include <vector>
using namespace std;
void output(vector<int> a);
int main(void){
	int n;
	int q;
	int count=0;
	cin >> n;
	
	vector<int> S(n);
	
	for(int i=0 ; i< n; i++){
		cin >> S[i];
	}
	cin >> q;
	vector<int> T(q);
	
	for(int i=0 ; i< q; i++){
		cin >> T[i];
	}
	
	for(int i=0 ; i< q; i++){
		
		for(int j=0 ; j< n; j++){
			if(T[i]==S[j]){
				count++;
				break;
			}
		}
	}
	
	cout << count<< endl;
}