#include "iostream"

using namespace std;

class Q {
	int fast, last;

	int num[100005];

public:
	Q() {
		fast = 0;	//???????????´???
		last = 0;	//???????°??????´???

	}

	void enqueue(int n) {
		
		if (last >= 100000) {

			last -= fast;
			for (int i = 0; i < last; i++) {
				num[i] = num[fast+i];
			}
			fast = 0;
		}

		num[last] = n;

		last++;
	}

	int dequeue() {
		fast++;
		return num[fast - 1];
	}

	int getlengh() {
		return last - fast;
	}

};


int main() {

	Q queue;
	//cout << sizeof(queue);

	int n, q;
	char name[100000][10];
	int time[100000];

	int total = 0;

	cin >> n;
	cin >> q;

	for (int i = 0; i < n; i++) {
		cin >> name[i];
		cin >> time[i];
		
		queue.enqueue( i );

	}

	for (int i = 0; queue.getlengh() > 0; i++) {
		int num = queue.dequeue();
		if (time[num] <= q) {
			total += time[num];
			cout << name[num] << " " << total << endl;
		}
		else {
			total += q;
			time[num] -= q;
			queue.enqueue(num);
		}
	}

	cin >> n;

	return 0;
}