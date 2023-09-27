#include <iostream>
#include <string>
using namespace std;

int main(){
	int n;
	int i;
	string t[1000];
	string h[1000];
	int scoreT=0;
	int scoreH=0;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>t[i]>>h[i];
		if (t[i]>h[i]){
			scoreT+=3;
		} else if(t[i]<h[i]){
			scoreH+=3;
		} else {
			scoreT++;
			scoreH++;
		}
	}
	cout << scoreT << " " << scoreH << endl;
	return 0;
}