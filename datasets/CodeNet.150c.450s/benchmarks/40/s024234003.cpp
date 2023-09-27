#include <bits/stdc++.h>
using namespace std;

class dice{
	public:
		int label[6];
		int tmp1, tmp2;
		void setnumber(){
			for(int i=0; i<6; i++)
				cin >> label[i];
		}
		void rotation(char sign){
			tmp1 = label[0];
			tmp2 = label[5];
			if(sign == 'N'){
				label[0] = label[1];
				label[5] = label[4];
				label[1] = tmp2;
				label[4] = tmp1;
			}
			if(sign == 'S'){
				label[0] = label[4];
				label[5] = label[1];
				label[4] = tmp2;
				label[1] = tmp1;
			}
			if(sign == 'W'){
				label[0] = label[2];
				label[5] = label[3];
				label[2] = tmp2;
				label[3] = tmp1;
			}
			if(sign == 'E'){
				label[0] = label[3];
				label[5] = label[2];
				label[3] = tmp2;
				label[2] = tmp1;
			}
		}
};

int main(){
	dice d;
	d.setnumber();
	string s; cin >> s;
	for(int i=0; i<s.length(); i++)
		d.rotation(s[i]);
	cout << d.label[0] << endl;
	return 0;
}