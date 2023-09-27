#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
#define M 1046527
#define NIL (-1)
#define L 14

long long T[M] = {0};

int getChar(char ch){
    if(ch == 'A') return 1;
    else if(ch == 'T') return 2;
    else if(ch == 'G') return 3;
    else if(ch == 'C') return 4;
    else return 0;
}


long long getKey(string data){
    long long sum = 0;
    long long p = 1;
    for(int i = 0; i < data.size(); ++i){
        sum += p * getChar(data[i]);
        p *= 5;
    }
    return sum;
}


int h1(int key){
    return key % M;
}


int h2(int key){
    return 1 + key % (M-1);
}


int h(int key, int i){
    return (h1(key) + i * h2(key)) % M;
}


bool find(string data){
    long long key;
    key = getKey(data);
    for(int i = 0;; i++){
        int j = h(key, i);
        if(T[j] == key) return true;
        else if(T[j] == 0 || i >= M) return false;
    }
}

void insert(string data){
    if(find(data)) return;
    long long key;
    key = getKey(data);
    for(int i = 0;; ++i){
        int j = h(key, i);
        if(T[j] == 0) {
            T[j] = key;
            break;
        }
        else if(i >= M) {
            cout << "Error: no more room for insertion" << endl;;
            break;
        }
    }
}

int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; ++i){
        string instruction, word;
        cin >> instruction;
        cin >> word;
        if(instruction == "insert") insert(word);
        else if(find(word)) cout << "yes" << endl;
        else cout << "no" << endl;
    }

    return 0;
}

