#include <iostream>
#include <string>
using namespace std;
struct shai{
	int num[6];
}; 
void ChangeE(struct shai &s){
	swap(s.num[5],s.num[2]);
	swap(s.num[2],s.num[0]);
	swap(s.num[0],s.num[3]);
	
};

void ChangeS(struct shai &s){
	swap(s.num[5],s.num[1]);
	swap(s.num[1],s.num[0]);
	swap(s.num[0],s.num[4]);
};

void ChangeW(struct shai &s){
	swap(s.num[5],s.num[3]);
	swap(s.num[3],s.num[0]);
	swap(s.num[0],s.num[2]);
};

void ChangeN(struct shai &s){
	swap(s.num[5],s.num[4]);
	swap(s.num[4],s.num[0]);
	swap(s.num[0],s.num[1]);
};


void swap(int &a,int &b){
	int temp =a;
	a=b;
	b=temp;
}

int main() {
	struct shai s;
	for(int i=0;i<6;i++){
		cin>>s.num[i];
	}
	string str;
	cin>>str;
	
	for(int i=0;i<str.length();i++){
		switch(str[i]){
			case 'E':
				ChangeE(s);
				break;
			case 'S':
				ChangeS(s);
				break;
			case 'W':
				ChangeW(s);
				break;
			case 'N':
				ChangeN(s);
				break;
			default:
				break;
							
		}
	}
	cout<<s.num[0]<<endl;
	return 0;
}