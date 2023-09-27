#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;



typedef struct {
	char name[10];
	int time;
} P;

void enq(P);
P deq(void);

P q[100005];
int head=0;
int tail=0;

int main(){
	P w;
	int n,qt,g=0;
	int t=0;
	cin >> n >> qt;
	for(int i=0;i<n;i++){
		cin >> q[i].name >> q[i].time;
		tail++;
	}
	while(g!=n){
		w = deq();
		if(w.time-qt>0){ // ???????????????
			w.time-=qt;
			t+=qt;
			enq(w);
		}else{ //?????????
			t+=w.time;
			w.time=0;
			cout << w.name << " "<< t << endl;
			g++;
		}
	}



	return 0;
}

void enq(P a){
	tail%=100005;
	q[tail]=a;
	tail++;
}

P deq(void){
	head%=100005;
	head++;
	return q[head-1];
}