#include<iostream>
#include <vector>
#include <string>
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
	//node id: key = k, parent key = pk, left key = lk, right key = rk, 
	void print(int i) {
		cout << "node " << i+1;
		cout << ": key = " << at(i) << ", ";
		if (has_parent(i))
			cout << "parent key = " << at(parent_id(i)) << ", ";
		if (has_left(i))
			cout << "left key = " << at(left_id(i)) << ", ";
		if (has_right(i))
			cout << "right key = " << at(right_id(i)) << ", ";
		cout << std::endl;
	}
	void Print() {
		for (unsigned int i=0;i<size();++i){
			print(i);
		}
	}
};


int main(){
	HeapTree A;
	A.InputSet();
	A.Print();
}