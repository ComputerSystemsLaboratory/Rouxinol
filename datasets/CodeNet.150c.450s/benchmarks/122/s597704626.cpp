#include<iostream>
#include<string>
#include<vector>
using namespace std;

void arrange(vector<int>& S){
    int i = S.size() - 1;
    while (i > 1 && S[i] > S[i/2]) {
        swap(S[i], S[i/2]);
        i = i / 2;
    }
}

void heapify(vector<int>& A, int i){
    int largest = i;
    int l = i * 2;
    if (l < A.size() && A[l] > A[i]) largest = l;
    int r = l + 1;
    if (r < A.size() && A[r] > A[largest]) largest = r;
    if (largest != i) {
        swap(A[i], A[largest]);
        heapify(A, largest);
    }
}

void extract(vector<int>& S){
    cout << S[1] << endl;
    swap(S[1], S.back());
    S.pop_back();
    heapify(S, 1);
}

int main(){
    vector<int> S(1);
    string command;
    do {
        cin >> command;
        if (command == "insert") {
            int num;
            cin >> num;
            S.push_back(num);
            arrange(S);
            continue;
        }
        if (command == "extract") {
            extract(S);
            continue;
        }
    } while (command != "end");
    return 0;
}