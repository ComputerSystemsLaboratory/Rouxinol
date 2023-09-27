#include<iostream>
#include<string>
#include <vector>

using namespace std;
class carditem{
public:
	char suits;	//???????????????'S'???????????????'H'???????????????'C'???????????????'D'
	int value;	//0???9
	int index;
	void setIndex() {
		index = g_index++;
	}
private:
	static int g_index;
};
int carditem::g_index = 0;

void InputCard(std::vector<carditem> & a) {
	int n;
	cin >> n;
	a.resize(n);
	for(int i=0;i<n;++i) {
		carditem & card = a.at(i);
		card.setIndex();
		string s;
		cin >> s;
		card.suits = s.at(0);
		cin >> card.value;
	}
}

void Printf(std::vector<carditem> & a) {
	for(int i=0;i<(int)a.size();++i) {
		carditem & card = a.at(i);
		cout  << card.suits << " " << card.value << std::endl;
	}
}

bool isStable(std::vector<carditem> & a) {
	for(int i=0,j;i<(int)a.size();++i) {
		if (i==0 || a.at(j).value != a.at(i).value){
			j = i;
		} else if (a.at(j).index > a.at(i).index){
			return	false;
		}
	}
	return true;
}

template<class T>
int Partition(std::vector<T> & A, int p,int r)
{
	T x = A[r];
	int i = p-1;
	for (int j = p; j <=r-1;++j) {
		if (A[j].value <= x.value) {
			i = i+1;
			swap(A[i],A[j]);
		}
	}
	swap(A[i+1],A[r]);
	return i+1;
}
template<class T>
void QuickSort(std::vector<T> & A, int p,int r)
{
	if (p < r) {
		int q = Partition(A, p, r);
		QuickSort(A,p,q-1);
		QuickSort(A,q+1,r);
	}
}

int main(){
	std::vector<carditem> A;
	::InputCard(A);
	QuickSort<carditem>(A, 0, (int)A.size()-1);

	bool isstable = ::isStable(A);
	cout  << (isstable ? "Stable" : "Not stable") << std::endl;
	::Printf(A);
}