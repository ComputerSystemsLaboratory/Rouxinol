#include <iostream>
#include <string>
#include <utility>

using namespace std;

class mqueue {
	private:
		pair<string,int> a[100005];
		int size,f,b;
	public:
		mqueue() {
			size = 100005;
			f = 0;
			b = 0;
		}
		bool empty() {
			return f == b;
		}
		void push(pair<string,int> e) {
			if((f + 1) % size== b) throw "Error: full";
			a[f] = e;
			f++;
			if(f == size) f = 0;
		}
		pair<string,int> front() {
			return a[b];
		}
		void pop() {
			if(!empty()) {
				b++;
				if(b == size) b = 0;
			}
			else throw "Error: empty";
		}
};

int main(void) {
	int n,q;
	mqueue m;
	cin >> n >> q;
	string name;
	int time;
	for(int i = 0;i < n;i++) {
		cin >> name >> time;
		m.push(make_pair(name,time));
	}
	int elapsed = 0;
	while(!m.empty()) {
		auto c = m.front();
		m.pop();
		c.second -= q;
		elapsed += q;
		if(c.second > 0) m.push(c);
		else {
			elapsed += c.second;
			cout << c.first <<" "<< elapsed << endl;
		}
	}
}

