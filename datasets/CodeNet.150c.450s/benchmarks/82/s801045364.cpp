#include <iostream>
using namespace std;

class dice {
public:
	int getRightFace(int top, int front);
	void setFaceNumber(int *number);
private:
	int face[6];
};

void dice::setFaceNumber(int *number) {
	for(int i=0; i<6; ++i) {
		face[i]=number[i];
	}
}

int dice::getRightFace(int top, int front) {
	int pos_top, pos_front;
	string str;
	string target_str;
	for(int i=0; i<6; ++i) {
		if(face[i]==top) pos_top=i;
		if(face[i]==front) pos_front=i;
	}
	str = to_string(pos_top)+to_string(pos_front);
	target_str="01540";
	if((int)target_str.find(str)!=-1) {
		return face[2];
	}
	target_str="04510";
	if((int)target_str.find(str)!=-1) {
		return face[3];
	}
	target_str="02530";
	if((int)target_str.find(str)!=-1) {
		return face[4];
	}
	target_str="03520";
	if((int)target_str.find(str)!=-1) {
		return face[1];
	}
	target_str="12431";
	if((int)target_str.find(str)!=-1) {
		return face[0];
	}
	target_str="13421";
	if((int)target_str.find(str)!=-1) {
		return face[5];
	}
	return 0;
}

int main() {
	int num[6];
	int n,top,front;
	dice d;
	cin >> num[0] >> num[1] >> num[2] >> num[3] >> num[4] >> num[5];
	d.setFaceNumber(num);
	cin >> n;
	for(int i=0; i<n; ++i) {
		cin >> top >> front;
		cout << d.getRightFace(top,front) << endl;
	}
	return 0;
}