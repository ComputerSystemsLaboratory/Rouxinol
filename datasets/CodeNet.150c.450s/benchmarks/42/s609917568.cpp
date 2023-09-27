#include<iostream>
#include<string>
using namespace std;

struct P {string name; int time;};

const int Len = 100005;
P Q[Len];
int head,tail,n;

void enqueue(P x);
P dequeue();

int main(){
	int elaps = 0,c;
	int i,q;
	P u;
	cin>>n>>q;

	for(int i=1;i<=n;i++)
		cin>>Q[i].name>>Q[i].time;

	head = 1,tail = n+1;

	while(head!=tail){
		u = dequeue();
		c = (q>u.time)? u.time:q;
		elaps += c;
		u.time -= c;
		if(u.time>0){
			enqueue(u);
		}else{
			cout<<u.name<<" "<<elaps<<endl;
		}
	}


}

void enqueue(P x){
	Q[tail] = x;
	tail = (tail+1)%Len;
}

P dequeue(){
	P x = Q[head];
	head = (head+1)%Len;
	return x;
}