#include <iostream>
using namespace std;

char Grading(int m,int f,int r){
	if((m==-1)||(f==-1)){
		return 'F';
	}else if((m + f)>= 80 ){
		return 'A';
	}else if((m + f)>= 65){
		return 'B';
	}else if((m+f) >= 50){
		return 'C';
	}else if((m+f)>=30){
		if(r>=50){
			return 'C';
		}
		return 'D';
	}else{
		return 'F';
	}
}

int main()
{
	int m,r,f;
	cin>>m>>r>>f;
	while( (m!=-1) || (r!=-1) || (f!=-1)){
		cout<<Grading(m,r,f)<<endl;
		cin>>m>>r>>f;
	}
	return 0;
}