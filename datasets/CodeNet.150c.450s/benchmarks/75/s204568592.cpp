//Max?????????
#include<iostream>
#include <vector>
using namespace std;

class HeapTree :public std::vector<int>
{
public:
	void InputSet() {
		std::vector<int> & a = *this;
		int n;
		cin >> n;
		a.resize(n,0);
		for(int i=0;i<n;++i) {
			cin >> a.at(i);
		}
	}
	bool has_parent(int i) {
		return i>0;
	}
	int parent_id(int i)
	{
		return (i+1)/2 - 1;
	}
	int left_id(int i)
	{
		return 2*(i+1)-1;
	}
	int right_id(int i){
		return 2*(i+1)+1-1;
	}
	bool has_left(int i) {
		return left_id(i) < (int)size();
	}
	bool has_right(int i) {
		return right_id(i) < (int)size();
	}
	void Print() {
		for (unsigned int i=0;i<size();++i){
			cout << " " << at(i);
		}
		cout << std::endl;
	}
	void maxHeapify(int i)
	{
		int largest = i;
		if (this->has_left(i) && at(left_id(i)) > at(i)) {
			largest = left_id(i);
		}
		if (this->has_right(i) && at(right_id(i)) > at(largest)) {
			largest = right_id(i);
		}
		if (largest != i) {
			std::swap(at(i),at(largest));
			maxHeapify(largest);
		}
	}
	void buildMaxHeap()
	{
		for (int i = int(size()/2)-1;i>=0;--i) {
			maxHeapify(i);
		}
	}
};


int main(){
	HeapTree A;
	A.InputSet();
	A.buildMaxHeap();
	A.Print();
}