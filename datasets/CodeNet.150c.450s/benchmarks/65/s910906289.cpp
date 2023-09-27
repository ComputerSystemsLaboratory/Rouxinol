// ALDS1_2_C
#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Card{
	char mark;
	int value;
};

void Swap(struct Card &x, struct Card &y){
	struct Card z = x;
	x = y;
	y = z;
}

void BubbleSort(vector<Card> &C){
	for(int i=0;i<C.size();i++)
		for(int j=C.size()-1;j>i;j--)
			if(C[j].value < C[j-1].value)
				Swap(C[j], C[j-1]);
}

void SelectionSort(vector<Card> &C){
	for(int i=0;i<C.size();i++){
		int minj = i;
		for(int j=i;j<C.size();j++)
			if(C[j].value < C[minj].value)
				minj = j;
		Swap(C[minj], C[i]);
	}
}

bool match(Card a, Card b){
	if((a.mark == b.mark) && (a.value == b.value))
		return true;
	else
		return false;
}

bool isStable(vector<Card> a, vector<Card> b){
	for(int i=0;i<a.size();i++)
		if(!match(a[i], b[i]))
			return false;

	return true;
}

void print_struct(vector<Card> a){
	for(int i=0;i<a.size();i++){
		if(i!=0) cout<<" ";
		cout<<a[i].mark<<a[i].value;
	}
	cout<<endl;
}

int main(){
	int n;
	string str;
	vector<Card> a, b;
	Card card;

	cin>>n;
	for(int i=0;i<n;i++){		
		cin>>str;
		card.mark = str[0];
		card.value = str[1] - '0';
		a.push_back(card);
		b.push_back(card);
	}

	BubbleSort(a);
	SelectionSort(b);

	print_struct(a);
	cout<<"Stable"<<endl;
	
	print_struct(b);
	if(isStable(a, b))
		cout<<"Stable"<<endl;
	else
		cout<<"Not stable"<<endl;
	
	return 0;
}