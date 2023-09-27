#include<iostream>
using namespace std;
int main(){
	int sa[3], sb[3];
	cin >> sa[0] >> sa[1] >> sa[2] >> sa[3];
	cin >> sb[0] >> sb[1] >> sb[2] >> sb[3];
	if ((sa[0] + sa[1] + sa[2] + sa[3]) > (sb[0] + sb[1] + sb[2] + sb[3])){
		cout << sa[0] + sa[1] + sa[2] + sa[3] << endl;
	}
	else{
		cout << sb[0] + sb[1] + sb[2] + sb[3] << endl;
	}
return 0;
}