#include <iostream>
using namespace std;

class Data{
private:
	int a_point, b_point;
public:
	Data(){ a_point=0; b_point=0;}
	void Add(int a, int b);
	void Show();
};

struct DataList{
	Data dataset;
	struct DataList* next;
};

void Data::Add(int a, int b){
	a_point += a;
	b_point += b;
}

void Data::Show(){
	cout << a_point << " " << b_point << endl;
}

int main(){
	int n, a, b;
	struct DataList *datalist, *p;

	datalist = new DataList;
	p = datalist;

	datalist->next = NULL;

	while(1){
		cin >> n;
		if(n == 0) break;

		p->next = new DataList;
		p->next->next = NULL;
		p = p->next;

		while(n > 0){
			cin >> a >> b;
			if(a > b) p->dataset.Add(a+b,0);
			else if(a < b) p->dataset.Add(0,a+b);
			else p->dataset.Add(a,b);
			n -= 1;
		}
	}

	p = datalist;

	while(p->next != NULL){
		p = p->next;
		p->dataset.Show();
	}

	return 0;
}