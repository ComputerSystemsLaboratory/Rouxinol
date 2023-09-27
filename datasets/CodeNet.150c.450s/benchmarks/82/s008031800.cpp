#include<iostream>
#include<string>

using namespace std;

class dice{
private:
	int D1;
	int D2;
	int D3;
	int D4;
	int D5;
	int D6;
public:
	dice(int d1,int d2,int d3,int d4,int d5,int d6){
	D1=d1;
	D2=d2;
	D3=d3;
	D4=d4;
	D5=d5;
	D6=d6;
	}
	void turn(char a){
		int front=D2;
		int back=D5;
		int top=D1;
	        int botton=D6;
		int right=D3;
		int left=D4;
		if(a=='E'){
			top=D4;
			right=D1;
			left=D6;
			botton=D3;
		}
		if(a=='N'){
			top=D2;
			front=D6;
			botton=D5;
			back=D1;
		}
		if(a=='S'){
			top=D5;
			front=D1;
			botton=D2;
			back=D6;
		}
		if(a=='W'){
			top=D3;
			left=D1;
			botton=D4;
			right=D6;
		}
		D1=top;
		D2=front;
		D3=right;
		D4=left;
		D5=back;
		D6=botton;
	}

	int dice2(int n1,int n2){
	for(int i=0;i<4;i++){
		turn('E');
		for(int j=0;j<4;j++){
			turn('S');
			for(int k=0;k<4;k++){
				turn('E');
				if(n1==D1&& n2==D2){
					return D3;
				}
			}
		}
	}
	}
};

int main(){
	int d[6];
	int a,b;
	int n;
	int front,back,right,left,top,botton;
	
	for(int i=0;i<6;i++)
		cin>>d[i];
	
	dice p(d[0],d[1],d[2],d[3],d[4],d[5]);
	cin>>n;	
	for(int i=0;i<n;i++){
		cin>>a>>b;
		cout<<p.dice2(a,b)<<endl;
	}
	
				
}