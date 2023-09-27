//ITP1_7_A
#include<iostream>
using namespace std;

int main()
{
	int m,f,r,c=0,i;
	char score;
	
		for(;;){
			cin>>m>>f>>r;
			if(m==-1&&f==-1&&r==-1)
				break;
			else if(m==-1||f==-1)
				score = 'F';
			else if(m+f>=80)
				score = 'A';
			else if(m+f<80&&m+f>=65)
				score = 'B';
			else if(m+f>=50&&m+f<65)
				score = 'C';
			else if(m+f>=30&&m+f<50){
				if(r>=50)
				score = 'C';
				else
				score = 'D';
				}
			else
				score='F';
			cout<<score<<endl;
		}	
	return 0;
}