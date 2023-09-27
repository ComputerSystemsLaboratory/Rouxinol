#include<iostream>
#include<string>
#include<algorithm>
#define max 100000

using namespace std;

int head, tail, a_size;

struct Ps {
	string name;
	int times;
};

Ps ps[max];

void enqueue(Ps p) {
	ps[tail] = p;
	++tail;
	tail %= max;
}

Ps dequenue() {
	Ps p = ps[head];
	++head;
	head %= max;
	return p;
}


int main() {
	int q_time,el_time=0,n_time;
	Ps ps_af;
	cin >> a_size >> q_time;
	for (int i = 1; i<=a_size; ++i) {
		cin >> ps[i].name >> ps[i].times;
	}
	head = 1;
	tail = a_size + 1;

	while (head != tail) {
		ps_af = dequenue();
		n_time = min(q_time, ps_af.times);
		ps_af.times -= n_time;
		el_time += n_time;
		if (ps_af.times > 0) enqueue(ps_af);
		else cout << ps_af.name << " " << el_time << endl;
	}
	return 0;
}