#include <iostream>
#include <ctime>
#include <cstdlib>
#include <sstream>
#include <string>
#include <queue>
using namespace std;

int parent(int i){
	return i/2;
}

int left(int i){
	return 2*i;
}

int right(int i){
	return 2*i +1;
}

int maxheapify(vector <int> &X, int i){
	int l, r;
	l = left(i);
	r = right(i);

	if (r <=X[0] && X[r] > X[i] && X[l] < X[r]){
		swap(X[r], X[i]);
		maxheapify(X, r);
	}
	else if (l <= X[0] && X[l] > X[i]){
		swap(X[l], X[i]);
		maxheapify(X, l);
	}
	return 0;
}

int buildmaxheap(vector <int> &X){
	for (int i= X[0]/2; i>0; i--){
		maxheapify(X, i);
	}
	return 0;
}

int maxheapinsert(vector <int> &X, int key){
	
	if (X[0]<X.size()-1){
		X[0]++;
		X[X[0]] = key;
	}
	else{
		X[0]++;
		X.push_back(key);
	}
	int i = X[0], p = parent(i);
	while (i > 1 && X[p] < X[i]){
		swap(X[i], X[p]);
		i = p;
		p = parent(i);
	}
	return 0;
}

int heapincreasekey(vector <int> &X, int i, int key){
	if (i > X[0] || key < X[i]) return NULL;
	X[i] = key;
	int p=parent(i);
	while (i > 1 && X[p] < X[i]){
		swap(X[i], X[p]);
		i = p;
		p = parent(i);
	}
	return 0;
}

int heapextractmax(vector <int> &X){
	if (X[0] < 1) return NULL;

	int maxheap = X[1];
	X[1] = X[X[0]--];
	maxheapify(X, 1);
	return maxheap;
}
int print(vector <int> &X){
	int *tmp = &X[0];
	for (int i=1; i<=X[0]; i++){
		tmp++;
		cout<<*tmp<<" ";
	}
	cout<<endl;
	return 0;
}

int str2int(string text){
    stringstream buf;
    int n;
 
    buf<<text;
    buf>>n;
    return n;
}

int main(void){
	int n;
	priority_queue <int> X;
	string text;

	while (true){
		cin>>text;
		if (text[2] == 'd'){
			break;
		}
		else if (text[0] == 'i'){
			cin>>n;
			X.push(n);
		}
		else if (text[0] == 'e'){
			cout<<X.top()<<endl;
			X.pop();
		}
	}
	return 0;
} 