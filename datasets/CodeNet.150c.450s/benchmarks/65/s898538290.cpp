#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;

struct card{
    char suit;
    int num;
};

int BubbleSort(vector<card> &A){
    int N = A.size();
    int cnt = 0;
    for(int i = 0; i < N; ++i){
        for(int j = N - 1; j >= i + 1; --j){
            if(A[j].num < A[j - 1].num){
                card tmp = A[j];
                A[j] = A[j - 1];
                A[j - 1] = tmp;
                ++cnt;
            }
        }
    }
    return cnt;
}

int InsertionSort(vector<card> &A){
    int N = A.size();
    int cnt = 0;
    for(int i = 0; i < N; ++i){
        int minj = i;
        int flag = 0;
        for(int j = i; j < N; ++j){
            if(A[j].num < A[minj].num){
                minj = j;
                flag = 1;
            }
        }
        if(flag){
            card tmp = A[i];
            A[i] = A[minj];
            A[minj] = tmp;
            ++cnt;
        }
    }
    return cnt;
}

void read(vector<card> &A, int N){
    //char ch[3];
    for(int i = 0; i < N; ++i){
        cin >> A[i].suit >> A[i].num;
    }
}

void write(vector<card> A, int N){
    for(int i = 0; i < N; ++i){
        cout << A[i].suit << A[i].num;
        if(i != N - 1)
            cout << " ";
    }
    cout << endl;
}

int main(void){
    int N;
    cin >> N;
    vector<card> A1(N);
    read(A1, N);
    vector<card> A2 = A1;
    
    BubbleSort(A1);
    InsertionSort(A2);
    
    write(A1, N);
    cout << "Stable" << endl;
    write(A2, N);
    int flag = 1;
    for(int i = 0; i < N; ++i){
        if(A1[i].suit != A2[i].suit)
            flag = 0;
    }
    if(flag)
        cout << "Stable" << endl;
    else
        cout << "Not stable" << endl;
    return 0;
}