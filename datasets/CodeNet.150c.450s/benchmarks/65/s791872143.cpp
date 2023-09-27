#include<iostream>
#include<vector>
#include<cstdlib>
using namespace std;

struct Card{
	int value;
	char type;
	void swapCard(Card &c){Card tmp; tmp=*this; *this=c; c=tmp;}
};

void printCards(vector<Card> &C,int N){
	cout << C[0].type << C[0].value;
	for(int i=1;i<N;i++){
		cout << " " << C[i].type << C[i].value;
	}
	cout << endl;
	return;
}

bool BubbleSort(vector<Card> &C,int N){
	bool stable;
	int i, j;
	for(i=0;i<N;i++){
		for(j=N-1;j>i;j--){
			if(C[j].value < C[j-1].value)
				C[j].swapCard(C[j-1]);
		}
	}
	stable = true;
	return stable;
}

bool SelectionSort(vector<Card> &C,int N){
	bool stable = true;
	int i, j, k, minj;
	for(i=0;i<N-1;i++){
		minj = i;
		for(j=i;j<N;j++){
			if(C[j].value < C[minj].value){
				minj = j;
				
			}
		}
		C[i].swapCard(C[minj]);
		for(k=minj-1;k>=0;k--){
			if(C[minj].value == C[k].value)
				stable = false;
		}
	}
	return stable;
}

int main(){
	int n, i;
	bool stable;
	char str[3];
	cin >> n;
	vector<Card> v(n), vcpy(n);
	for(i=0;i<n;i++){
		cin >> str;
		v[i].value = atoi(str+1);
		v[i].type = str[0];
	}
	vcpy = v;
	stable = BubbleSort(vcpy, n);
	printCards(vcpy, n);
	if(stable)
		cout << "Stable\n";
	else
		cout << "Not stable\n";
	vcpy = v;
	stable = SelectionSort(vcpy, n);
	printCards(vcpy, n);
	if(stable)
		cout << "Stable\n";
	else
		cout << "Not stable\n";
	return 0;
}