#include<iostream>
using namespace std;

class Select{
	int *p;
	int size;
public:
	Select(int);
	Select(const Select&);
	Select& operator=(const Select&);
	~Select();
	void input();
	void narabekae();
	int get_size()const{ return size; }
};

Select::Select(int size){
	this->size = size;
	p = new int[size];
}

Select::Select(const Select& x){
	p = new int[x.get_size()];
}

Select& Select::operator=(const Select& x){
	if(&x==this) return *this;
	delete p;
	p = new int[x.get_size()];
	return *this;
}

Select::~Select(){
	delete [] p;
}

void Select::input(){
	for(int i=0;i<get_size();i++)
		cin>>p[i];
}

void Select::narabekae(){
	int count = 0;
	for(int i=0;i<get_size();i++){
		int minj = i;
		for(int j=i;j<get_size();j++){
			minj = (p[j]<p[minj])? j:minj;
		}
		int temp = p[i];
		p[i] = p[minj];
		p[minj] = temp;
		if(i!=minj) count++;
	}

	for(int i=0;i<get_size();i++){
		if(i!=get_size()-1){
			cout<<p[i]<<" ";
		}else{
			cout<<p[i]<<endl;
		}
	}
	cout<<count<<endl;
}

int main(){
	int size;
	cin>>size;

	Select test(size);
	test.input();
	test.narabekae();

	cin.get();
	cin.get();
}