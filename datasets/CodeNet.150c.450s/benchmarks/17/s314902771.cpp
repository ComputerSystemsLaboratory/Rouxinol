#include<iostream>
using namespace std;

int main(){
	int num[5];
	int m1 = -2147483647, m2 = -2147483647, m3 = -2147483647, m4 = -2147483647, m5 = -2147483647;
        int p1 = 0, p2 = 0, p3 = 0, p4 = 0;
	cin >> num[0] >> num[1] >> num[2] >> num[3] >> num[4];

	for(int i=0; i<5; i++){
		if(m1 < num[i]){
                      m1 = num[i];
                      p1 = i;
                }
	}

	for(int i=0; i<5; i++){
   		if(i == p1) continue;
		else if(m2 < num[i]){
			m2 = num[i];
			p2 = i;
		}	
	}
	for(int i=0; i<5; i++){
   		if(i == p2 || i == p1) continue;
		else if(m3 < num[i]){
			m3 = num[i];
			p3 = i;
		}
	}
	for(int i=0; i<5; i++){
   		if(i == p3 || i == p1 || i == p2) continue;
		else if(m4 < num[i]){
			m4 = num[i];
			p4 = i;
		}	
	}
	for(int i=0; i<5; i++){
   		if(i == p4 || i == p1 || i == p2 || i == p3) continue;
		else if(m5 < num[i]){
			m5 = num[i];
		}	
	}
	cout << m1 << " " << m2 << " " << m3 << " " << m4 << " " << m5 << endl;

	return 0;

}