#include <iostream>
using namespace std;

int main(){
	int m,f,r,count=0;
	char x[100]={0};
	while(1){
		cin >> m >> f >> r;
		if(m==-1&&f==-1&&r==-1){
			break;
		}
		if(m==-1||f==-1){
			x[count]='F';
		}else if((m+f)>=80){
			x[count]='A';
		}else if((m+f)>=65&&(m+f)<80){
			x[count]='B';
		}else if((m+f)>=50&&(m+f)<65){
			x[count]='C';
		}else if((m+f)>=30&&(m+f)<50){
			if(r>=50){
				x[count]='C';
			}else{
				x[count]='D';
			}
		}else if((m+f)<30){
			x[count]='F';
		}
		count++;
	}
	for(int i=0;i<count;i++){
		cout << x[i] << endl;
	}
	return 0;
}
	