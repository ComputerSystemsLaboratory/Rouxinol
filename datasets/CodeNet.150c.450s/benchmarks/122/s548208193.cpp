#include <iostream>
#include <vector>
using namespace std;

template<typename T>
class PriorityQueue{
private:
	vector<T> d;
public:
	void push(T t){
        int k = d.size();
		d.push_back(t);
        while(k && d[(k - 1) / 2] < d[k]){
            swap(d[(k - 1) / 2], d[k]);
            k = (k - 1) / 2;
        }
	}
    T top(){
        // assert(d.size() > 0);
        return d[0];
    }
    void pop(){
        // assert(d.size() > 0);
        d[0] = d.back();
        d.pop_back();
        maxHeapify(0);
    }
	void maxHeapify(int k){
		int l = 2 * k + 1;
		int r = 2 * k + 2;
		T largest;
		if(l < d.size() && d[l] > d[k]) largest = l;
		else largest = k;

		if(r < d.size() && d[r] > d[largest]) largest = r;

		if(largest != k){
			swap(d[k], d[largest]);
			maxHeapify(largest);
		}
    }
	void printHeap(){
		for(int i = 0; i < d.size(); i++){
			cout << " " << d[i];
		}
		cout << endl;
	}
};

int main(){
    PriorityQueue<int> pq;
    while(1){
        string s;
        cin >> s;
        if(s == "end") break;
        if(s == "insert"){
            int a;
            cin >> a;
            pq.push(a);
        }else{
            cout << pq.top() << endl;
            pq.pop();
        }
        // pq.printHeap();
    }
}