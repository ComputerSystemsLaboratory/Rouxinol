#include <iostream>
#include <string>
#include <vector>
using namespace std;

class DICE{
private:
	int temp;
	
public:
    int ii,iii,ji,ij;
	int ans,foo,fooo;
	int dice[6];
	int cpyDice[6];
	void cpy(){
		for(ii=0;ii<6;ii++){
			cpyDice[ii]=dice[ii];
		}
	}
	void rollN(){roll(1,5,4);}
	void rollS(){roll(4,5,1);}
	void rollE(){roll(3,5,2);}
	void rollW(){roll(2,5,3);}
	void right(){rollright(1,2,4,3);}
	void rollright(int a,int b,int c,int d){
		temp=cpyDice[a];cpyDice[a]=cpyDice[b];cpyDice[b]=cpyDice[c];cpyDice[c]=cpyDice[d];cpyDice[d]=temp;
	}
		//2->3 3->5 5-4 4-2
	void roll(int a,int b,int c){
		temp=cpyDice[0];cpyDice[0]=cpyDice[a];
		cpyDice[a]=cpyDice[b];cpyDice[b]=cpyDice[c];cpyDice[c]=temp;
	}
	void fi(char ch){
		if(ch=='N'){rollN();}
		if(ch=='S'){rollS();}
		if(ch=='W'){rollW();}
		if(ch=='E'){rollE();}
	}
	void NE(){
		for(ii=0;ii<4;ii++){
			for(iii=0;iii<4;iii++){
				if(foo==cpyDice[0] && fooo==cpyDice[1]){
					ans=cpyDice[2];
				}
				rollE();
			}
			rollN();
		}
	}
	void NW(){
		for(ii=0;ii<4;ii++){
			//rollN();
			for(ji=0;ji<4;ji++){
				if(foo==cpyDice[0] && fooo==cpyDice[1]){
					ans=cpyDice[2];
				}
				rollW();
			}
			rollN();
		}
	}
	void SE(){
		for(ii=0;ii<4;ii++){
			//rollS();
			for(ji=0;ji<4;ji++){
				if(foo==cpyDice[0] && fooo==cpyDice[1]){
					ans=cpyDice[2];
				}
				rollE();
			}
			rollS();
		}
	}
	void SW(){
		for(ii=0;ii<4;ii++){
			//rollS();
			
			for(ji=0;ji<4;ji++){
				if(foo==cpyDice[0] && fooo==cpyDice[1]){
					ans=cpyDice[2];
				}
				rollW();
			}
			rollS();
		}
	}
	void EN(){
		for(ii=0;ii<4;ii++){
			for(iii=0;iii<4;iii++){
				
				if(foo==cpyDice[0] && fooo==cpyDice[1]){
					ans=cpyDice[2];
				}
				rollN();
			}
			rollE();
		}
	}
	void ES(){
		for(ii=0;ii<4;ii++){
			for(iii=0;iii<4;iii++){
				
				if(foo==cpyDice[0] && fooo==cpyDice[1]){
					ans=cpyDice[2];
				}
				rollS();
			}
			rollE();
		}
	}
	void WN(){
		for(ii=0;ii<4;ii++){
			for(iii=0;iii<4;iii++){
				
				if(foo==cpyDice[0] && fooo==cpyDice[1]){
					ans=cpyDice[2];
				}
				rollN();
			}
			rollW();
		}
	}
	void WS(){
		for(ii=0;ii<4;ii++){
			for(iii=0;iii<4;iii++){
				
				if(foo==cpyDice[0] && fooo==cpyDice[1]){
					ans=cpyDice[2];
				}
				rollS();
			}
			rollW();
		}
	}
	void rR(){
		for(ji=0;ji<4;ji++){
			for(ii=0;ii<4;ii++){
				if(foo==cpyDice[0] && fooo==cpyDice[1]){
					ans=cpyDice[2];
				}
				right();
			}
			rollN();
		}

	}
};



int main(){
	DICE c;
	for(int i=0;i<6;i++){
		cin>>c.dice[i];
	}
    int q,front,up;cin>>q;
	for(int i=0;i<q;i++){
			c.cpy();
		cin>>up>>front;
		for(int in=0;in<6;in++){
			if(c.dice[in]==up){
				c.foo=c.dice[in];
			}
			if(c.dice[in]==front){
				c.fooo=c.dice[in];
			}
		}

		//c.foo=c.dice[up-1];
		//c.fooo=c.dice[front-1];
		c.ans=0;
		/*if(c.foo==c.cpyDice[0] && c.fooo==c.cpyDice[1]){
					c.ans=c.cpyDice[2];
					cout<<c.ans<<endl;
				}*/
		c.rR();
		if(c.ans!=0){
			cout<<c.ans<<endl;
			continue;
		}
		c.NE();
		if(c.ans!=0){
			cout<<c.ans<<endl;
			continue;
		}
		c.NW();
		if(c.ans!=0){
			cout<<c.ans<<endl;
			continue;
		}
		c.SE();
		if(c.ans!=0){
			cout<<c.ans<<endl;
			continue;
		}
		c.SW();
		if(c.ans!=0){
			cout<<c.ans<<endl;
			continue;
		}
		c.EN();
		if(c.ans!=0){
			cout<<c.ans<<endl;
			continue;
		}
		c.ES();
		if(c.ans!=0){
			cout<<c.ans<<endl;
			continue;
		}
		c.WN();
		if(c.ans!=0){
			cout<<c.ans<<endl;
			continue;
		}
		c.WS();
		if(c.ans!=0){
			cout<<c.ans<<endl;
			continue;
		}

	}
	int aa;cin>>aa;
		
	return 0;
}


/*
  N 1->2 2->6 6->5 5->1
  S 1->5 5->6 6->2 2->1
  W 1->3 3->6 6->4 4->1
  E 1->4 4->6 6->3 3->1
  */