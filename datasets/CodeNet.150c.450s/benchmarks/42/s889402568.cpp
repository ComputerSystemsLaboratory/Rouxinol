#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<climits>
using namespace std;

struct process{
	char name[11];
	int time;
};

const long LEN=510029;

class queue {
	process data[LEN];
	int head, tail;
public:
	queue(): head(0), tail(0) {}  

	void enqueue(const process&);
	process& dequeue();

	bool isEmpty(){ return head == tail;  }
	bool isFull(){  return (tail+1) % LEN == head;  }
};
void queue::enqueue(const process& p)
{
	if( isFull() ){
		cout<<"full!"<<endl;
		exit(1);
	}
	data[tail+1]=p;
	tail= (tail+1) % LEN;
}
process& queue::dequeue()
{
	if( isEmpty() ){
		cout<<"empty!"<<endl;
		exit(1);
	}
	head= (head+1) % LEN;
	return data[head];
}

int main()
{
	queue q;


	int n;
	short quan;
	cin>>n>>quan;

	process p;



	int passTime=0;

	for( int i=0; !q.isEmpty() || i<n; i++ ) {

		if( i<n ){
			scanf("%s %d", &p.name, &p.time);
		}
		else
			p=q.dequeue();
			


		if( p.time - quan <=0 ){
			passTime+=p.time;
			printf("%s %d\n", p.name, passTime);

		}else{
			passTime+=quan;
			p.time-=quan;
			q.enqueue(p);
		}


	}

}