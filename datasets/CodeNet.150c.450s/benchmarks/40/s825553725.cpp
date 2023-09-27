#include <iostream>
using namespace std;

class dice
{
	public:
		int face[6];
		void rotate(char c);
		void rotw();
		void rots();
		void rotn();
		void rote();
};

void dice::rotate(char c){
	     if(c=='S') rots();
	else if(c=='W') rotw();
	else if(c=='E') rote();
	else if(c=='N') rotn();
}

void dice::rotw(){
	int t[6];
	for(int i=0;i<6;i++) t[i] = face[i];
	t[0] = face[2]; t[2] = face[5]; t[3] = face[0]; t[5] = face[3];
	for(int i=0;i<6;i++) face[i] = t[i];
}
void dice::rots(){
	int t[6];
	for(int i=0;i<6;i++) t[i] = face[i];
	t[0] = face[4]; t[1] = face[0]; t[4] = face[5]; t[5] = face[1];
	for(int i=0;i<6;i++) face[i] = t[i];
}
void dice::rotn(){
	int t[6];
	for(int i=0;i<6;i++) t[i] = face[i];
	t[0] = face[1]; t[1] = face[5]; t[4] = face[0]; t[5] = face[4];
	for(int i=0;i<6;i++) face[i] = t[i];
}
void dice::rote(){
	int t[6];
	for(int i=0;i<6;i++) t[i] = face[i];
	t[0] = face[3]; t[2] = face[0]; t[3] = face[5]; t[5] = face[2];
	for(int i=0;i<6;i++) face[i] = t[i];
}

int main(){
	dice d;
	for(int i=0;i<6;i++) cin >> d.face[i];
	char t;
	while(cin >> t) d.rotate(t);
	cout << d.face[0] << endl;
}