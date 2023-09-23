#include <iostream>
using namespace std;
int main(){
	int a , b , c;
	int max , med , min;
	cin >> a >> b >> c;
	if(a<b){
		if(a<c) {
			min=a;
			if (b<c){
				med=b;
				max=c;
			} else {
				med=c;
				max=b;
			}
		} else {
			min=c;
			if (a<b){
				med=a;
				max=b;
			} else {
				med=b;
				max=a;
			}
		}
	} else {
		if(b<c){
			min=b;
			if(a<c){
				med=a;
				max=c;
			} else {
				med=c;
				max=a;
			}
		} else { 
			min=c;
			med=b;
			max=a;
		}
	}
	cout << min << " " << med << " "<< max << endl;
	return 0;
}