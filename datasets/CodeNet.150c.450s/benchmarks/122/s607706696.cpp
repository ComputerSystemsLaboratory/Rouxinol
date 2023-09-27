#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>
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
 
    if (r <=X[0] && X[l] < X[r] && X[r] > X[i]){
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
    int hsize = X[0];
    for (int i= hsize/2; i>0; i--){
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
    int i = X[0];
    while (i > 1 && X[parent(i)] < X[i]){
        swap(X[i], X[parent(i)]);
        i = parent(i);
    }
    return 0;
}
 
int heapincreasekey(vector <int> &X, int i, int key){
    if (i > X[0] || key < X[i]) return NULL;
    X[i] = key;
    while (i > 1 && X[parent(i)] < X[i]){
        swap(X[i], X[parent(i)]);
        i = parent(i);
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
 
int main(void){
 
    vector <int> X(1);
    X[0] = 0;
    string text;
	int n;

	while (true){
        cin>>text;
        if (text[2] == 'd'){
            break;
        }
        else if (text[0] == 'i'){
			cin>>n;
            maxheapinsert(X, n);
        }
        else if (text[0] == 'e'){
            cout<<heapextractmax(X)<<endl;
        }
    }
    return 0;
} 