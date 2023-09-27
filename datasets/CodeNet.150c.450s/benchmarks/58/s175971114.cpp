/*
created at 29.6.2015 by charis 
last edited at 2.9.2015 by charis
http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_3_A
*/

#include<cstdlib>
#include<cstdio>
using namespace std;

class stack{
public:
	int top;
	int S[1000];

	void initialize(){
		top = 0;
	}
	int isEmpty(){
		return top == 0;
	}
	int isFull(){
		return top>=1000; //S[100]
	}
	void push(int x){
		if(isFull()) printf("Error\n");
		else {
			top++;
			S[top]=x;		
		}	
	}
	int pop(){
		if(isEmpty()) printf("Error\n");
		top--;		
		return S[top+1];
	}
};

int main(){
	stack s;
	char C[100];
	s.initialize();
	while( scanf("%s", &C) != EOF ){
		if ( C[0] == 'E') break ;
		if ( C[0] == '+' ){
			int a = s.pop();
			int b = s.pop();	
			s.push(a+b); 
		}	
		else if ( C[0] == '-' ) {
			int a = s.pop();
			int b = s.pop();	
			s.push(b-a); 			
		}
		else if ( C[0] == '*' ) {
			int a = s.pop();
			int b = s.pop();	
			s.push(a*b); 			
		}
		else {
			int x = atoi(C);
			s.push(x);
		}
	} 
    printf( "%d\n", s.pop() );
	
	return 0; 
} 