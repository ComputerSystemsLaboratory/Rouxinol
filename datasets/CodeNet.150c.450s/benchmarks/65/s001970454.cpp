#include<iostream>
#include<cstdlib>
using namespace std;

class Bubble{
protected:
	int *number;
	char *card;
	int size;
public:
	Bubble(int);
	Bubble(const Bubble&);
	Bubble& operator=(const Bubble&);
	~Bubble();
	void input();
	void narabekae();
	int get_size()const{ return size; }
	int *get_number()const;
	char *get_card()const;
};

class Select : public Bubble{
private:
	int *snumber;
	char *scard;
public:
	Select(int x) : Bubble(x){
		snumber = new int[x];
		scard = new char[x];
	}
	~Select(){
		delete [] snumber;
		delete [] scard;
	}
	void narabekae();
	void copy(char*,int*);
	void judge(char*)const;
};

Bubble::Bubble(int size){
	this->size = size;
	card = new char[get_size()];
	number = new int[get_size()];
}

Bubble::Bubble(const Bubble& x){
	number = new int[x.get_size()];
	card = new char[x.get_size()];
}

Bubble& Bubble::operator=(const Bubble& x){
	if(this==&x) return *this;
	delete number;
	delete card;
	number = new int[x.get_size()];
	card = new char[x.get_size()];
	return *this;
}

Bubble::~Bubble(){
	delete [] card;
	delete [] number;
}

void Bubble::input(){
	for(int i=0;i<get_size();i++){
		cin>>card[i];
		cin>>number[i];
	}
}

void Bubble::narabekae(){
	for(int i=0;i<get_size();i++){
		for(int j=get_size()-1;j>i;j--){
			if(number[j-1]>number[j]){
				int temp = number[j];
				char ntemp = card[j];
				number[j] = number[j-1];
				card[j] = card[j-1];
				number[j-1] = temp;
				card[j-1] = ntemp;
			}
		}
	}

	for(int i=0;i<get_size();i++){
		if(i!=get_size()-1){
			cout<<card[i]<<number[i]<<" ";
		}else{
			cout<<card[i]<<number[i]<<endl;
		}
	}
	cout<<"Stable"<<endl;
}

int* Bubble::get_number()const{
	return number;
}

char* Bubble::get_card()const{
	return card;
}

void Select::copy(char* card,int *number){
	for(int i=0;i<get_size();i++){
		snumber[i] = number[i];
		scard[i] = card[i];
		//cout<<"scard[]="<<scard[i]<<"snumber="<<snumber[i]<<endl;
	}
}

void Select::narabekae(){
	for(int i=0;i<get_size();i++){
		int minj = i;
		for(int j=i;j<get_size();j++){
			if(snumber[minj]>snumber[j]) minj = j;
		}
		int ntemp = snumber[i];
		snumber[i] = snumber[minj];
		snumber[minj] = ntemp;
		char ctemp = scard[i];
		scard[i] = scard[minj];
		scard[minj] = ctemp;
	}

	for(int i=0;i<get_size();i++){
		if(i!=get_size()-1){
			cout<<scard[i]<<snumber[i]<<" ";
		}else{
			cout<<scard[i]<<snumber[i]<<endl;
		}
	}
}

void Select::judge(char* card)const{
	for(int i=0;i<get_size();i++){
		if(scard[i]!=card[i]){
			cout<<"Not stable"<<endl;
			return;
		}
	}
	cout<<"Stable"<<endl;
}

int main(){

	int in;
	cin>>in;

	Bubble test1(in);
	Select test2(in);
	test1.input();
	int *p;
	char *n;
	p = test1.get_number();
	n = test1.get_card();
	test2.copy(n,p);
	
	test1.narabekae();
	test2.narabekae();

	n = test1.get_card();
	test2.judge(n);

}