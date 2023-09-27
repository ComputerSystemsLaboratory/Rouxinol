/* last edited at 31.8.2015 by charis
http://judge.u-aizu.ac.jp/onlinejudge/commentary.jsp?id=ALDS1_3_B
*/

#include<iostream>
#include<string>
using namespace std;

class Queue{
private:
	int head, tail;	
public:
	int Q[100001];
	string name[100001];
	
	void initialize(){
		head = 0; tail = 0;
	}
	int isEmpty(){
		return head == tail;
	}
	int isFull(){
		return head == (tail + 1) % 100001;
	}
	void enqueue(int x, string c){
		if (isFull()) cout << "Error" << endl;
		Q[tail] = x ;
		name[tail] = c ;
		if (tail + 1 == 100001) tail = 0;
		else tail++;
	}
	int dequeue(){
		if (isEmpty()) cout << "Error" << endl;
		int x = Q[head];
		if(head + 1 == 100001) head = 0;
		else head++;
		return x;
	}	
	string outname(){
		if (head == 0) return name[100000];		
		else return name[head-1];
	}
};

int main(){
	int total=0;	
	int n, q;
	cin >> n >> q;

	Queue que;
	que.initialize();

	for ( int i = 0; i < n; i++){
		string c;
		int x;
		cin >> c >> x; 
		que.enqueue(x, c);
	} 
	if(n==1 && q==1){
		int x = que.dequeue();
		string c = que.outname();	
		cout << c << " " << x << endl;
	}
	else {
		int cnt=0;
		while(1){
			if (que.isEmpty()) break;
			int x = que.dequeue();
			string c = que.outname();
			if (x > q){
				x = x - q ;
				total += q;
				que.enqueue(x, c);
			}
			else if (x <= q){
				total += x;
				cout << c << " " << total << endl;
			}
			cnt++;			
		}		
	}	
	return 0; 	
}