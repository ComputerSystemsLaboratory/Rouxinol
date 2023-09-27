#include <iostream>
using namespace std;

class dice {
public:
	int getTopFace(void);
	void rotate(char dir);
	void setFaceNumber(int *number);
private:
	int face[6];
};

int dice::getTopFace(void) {
	return face[0];
}

void dice::rotate(char dir) {
	int temp;
	switch(dir) {
	case 'N' :
		temp=face[0];
		face[0]=face[1];
		face[1]=face[5];
		face[5]=face[4];
		face[4]=temp;
		break;
	case 'S' :
		temp=face[0];
		face[0]=face[4];
		face[4]=face[5];
		face[5]=face[1];
		face[1]=temp;
		break;
	case 'W' :
		temp=face[0];
		face[0]=face[2];
		face[2]=face[5];
		face[5]=face[3];
		face[3]=temp;
		break;
	case 'E' :
		temp=face[0];
		face[0]=face[3];
		face[3]=face[5];
		face[5]=face[2];
		face[2]=temp;
		break;
	}
}

void dice::setFaceNumber(int *number) {
	for(int i=0; i<6; ++i) {
		face[i]=*(number+i);
	}
}

int main() {
	int num[6];
	string str;
	dice d;
	cin >> num[0] >> num[1] >> num[2] >> num[3] >> num[4] >> num[5] >> str;
	d.setFaceNumber(num);
	for(int i=0; i<(int)str.length(); ++i) {
		d.rotate(str[i]);
	}
	cout << d.getTopFace() << endl;
	return 0;
}