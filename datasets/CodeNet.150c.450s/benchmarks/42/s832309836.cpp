#include<iostream>
#include<string>
using namespace std;

class task {
public:
	void input(string n, int time) {
		name = n;
		endTime = time;
	}

	int  timeReduce(int q) {
		endTime -= q;
		return endTime;
	}

	string getName() {
		return name;
	}
	
//	void setName(char n[]) {
////		name = n;
//		strcpy(name.c_str, n);
//	}

	int getTime() {
		return endTime;
	}

	void setTime(int t) {
		endTime = t;
	}

//private:
	string name;
	int endTime;
};

class queue {
public:
	queue(int h, int t) {
		m_iHead = h;
		m_iTail = t;
	}

	bool isEmpty() {
		return m_iHead == m_iTail;
	}

	bool isFull() {
		return m_iHead == (m_iTail + 1) % m_iMAX;
	}

	void enqueue(task x) {
		if (isFull()) return;
		Q[m_iTail] = x;
		if (m_iTail + 1 == m_iMAX) {
			m_iTail = 0;
		}
		else {
			m_iTail++;
		}
	}

	 task dequeue() {
		 task t;
		 if (isEmpty()) return t;
		t = Q[m_iHead];
		if (m_iHead + 1 == m_iMAX) {
			m_iHead = 0;
		}
		else {
			m_iHead++;
		}
		return t;
	}

	 task * getQ() {
		 return Q;
	 }

private:
	task Q[100000];
	int m_iHead;
	int m_iTail;
	const int m_iMAX = 100000;
};

int main() {
	int proces; //??????????????°
	int quwontum;
	int elaps = 0;

	cin >> proces;
	cin >> quwontum;
	queue  *pQ = new queue(0, proces);
	for (int i = 0; i < proces; i++) {
		//string sTemp;
		//int iTemp;
		cin >> pQ->getQ()[i].name;
		cin >> pQ->getQ()[i].endTime;
		//pQ->getQ()[i]->name;
		//pQ->getQ()[i]->endTime;
	}

	while (!pQ->isEmpty()) {
		task t = pQ->dequeue();
		int eT = quwontum < t.endTime ? quwontum : t.endTime;
		t.endTime -= eT;
		elaps += eT;
		if (t.endTime > 0) {
			pQ->enqueue(t);
		}
		else {
			cout << t.name << " " << elaps << endl;
		}
	}

	return 0;
}