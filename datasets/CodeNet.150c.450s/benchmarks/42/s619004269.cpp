#include<iostream>
#define LEN 200000

typedef struct process{
	char name[100];
	int time;
} P;

P Q[LEN];
int head, tail, n;

P dequeue(){
	P x = Q[head];
	head = (head+1) % LEN;
	return x;
}

void enqueue(P x){
	Q[tail] = x;
	tail = (tail + 1) % LEN;
}
int main (){
	int i, n, t, elaps;
	P h;
	elaps = 0;
	std::cin >> n >> t;
	for (i=0;i<n;i++){
		std::cin >> Q[i].name >> Q[i].time;
	}
	
	head = 0;
	tail = n;
	
	while(head != tail){
		h = dequeue();
		if(h.time <= t){
			elaps += h.time;
			h.time = 0;
			std::cout << h.name << " " << elaps << std::endl;
		} else{
			h.time -= t;
			elaps += t;
			enqueue(h);
		}
	}
	return 0;
}