#include<iostream>
using namespace std;
class dice{
	int a;
public :
	void N(int *up,int *back,int *right , int *left,int *front,int *under){
		a=*up;
		*up=*back;
		*back=*under;
		*under=*front;
		*front=a;
	}
	void E(int *up,int *back,int *right , int *left,int *front,int *under){
		a=*up;
		*up=*left;
		*left=*under;
		*under=*right;
		*right=a;
	}
	void W(int *up,int *back,int *right , int *left,int *front,int *under){
		a=*up;
		*up=*right;
		*right=*under;
		*under=*left;
		*left=a;
	}
	void S(int *up,int *back,int *right , int *left,int *front,int *under){
		a=*up;
		*up=*front;
		*front=*under;
		*under=*back;
		*back=a;
	}
	void right(int *up,int *back,int *right , int *left,int *front,int *under){
		a=*front;
		*front=*left;
		*left=*back;
		*back=*right;
		*right=a;
	}
	void left(int *up,int *back,int *right , int *left,int *front,int *under){
		a=*front;
		*front=*right;
		*right=*back;
		*back=*left;
		*left=a;
	}
};
int main(){
	int up=1,back=2,right=3,left=4,front=5,under=6;
	int q,up1,back1;
	char ch;
	bool bo=false;
	dice die;
	cin>>up>>back>>right>>left>>front>>under;
	cin>>q;
	int count=0;
	for(int i=0;i<q;i++){
		cin>>up1>>back1;
		for(int j=1;;j++){
			if(j<17){
				die.N(&up,&back,&right,&left,&front,&under);
			}
			else if(j>18){
				die.E(&up,&back,&right,&left,&front,&under);
			}
			if(up1==up && back1==back){
				bo=true;
				break;
			}
			if(j%4==0){
				die.right(&up,&back,&right,&left,&front,&under);
				continue;
			}

		}
		cout<<right<<endl;
	}
	/*
	cin>>ch;
	if(ch=='N'){die.N(&up,&back,&right,&left,&front,&under);
	}
	else if(ch=='E'){ die.E(&up,&back,&right,&left,&front,&under); 
	}
	else if(ch=='W'){die.W(&up,&back,&right,&left,&front,&under); 
	}
	else if(ch=='S'){die.S(&up,&back,&right,&left,&front,&under); 
	}
	cout<<up<<endl;
	*/

	return 0;
}