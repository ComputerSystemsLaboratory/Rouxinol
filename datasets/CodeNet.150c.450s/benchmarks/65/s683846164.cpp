#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;

struct Card{
    char suit, value;
};

void BubbleSort(struct Card A[], int N){
    int flag =1;
    int swap = 0;
    while(flag){
        flag = 0;
        for(int i = N-1; i >= 1; i--){
            if(A[i].value < A[i-1].value){
                Card tmp = A[i];
                A[i] = A[i-1];
                A[i-1] = tmp;
                flag = 1;
                swap++;
            }
        }
    }
}

void SelectionSort(struct Card A[], int N){
    int swap = 0;
    for(int i = 0; i < N; i++){
        int minj = i;
        for(int j = i; j < N; j++){
            if(A[j].value < A[minj].value){
                minj = j;
//                swap++;
            }
        }
        if(A[minj].value != A[i].value){
            Card tmp = A[minj];
            A[minj] = A[i];
            A[i] = tmp;
            swap++;
        }
//        swap(data[minj], data[i]);
    }

}
void print(struct Card A[], int N){
    for(int i = 0; i < N; i++){
        cout<<A[i].suit<<A[i].value;
        if(i != N-1){
            cout<<" ";
        }else{
            cout<<endl;
        }
    }
}
bool isStable(struct Card A[], struct Card B[], int N){
    for(int i = 0; i < N; i++){
        if((A[i].value != B[i].value) || (A[i].suit != B[i].suit)){
            return false;
        }
    }
    return true;
}
int main(){
    int a;
    cin>>a;
    Card C1[100], C2[100];
//    vector<string> data(a);
    for(int k = 0; k < a; k++){
        cin>>C1[k].suit>>C1[k].value;
    }
    for(int i = 0; i < a; i++){
        C2[i] = C1[i];
    }
    BubbleSort(C1,a);
    SelectionSort(C2,a);
    print(C1,a);
    if(isStable(C1,C1,a)){
        cout<<"Stable"<<endl;
    }else{
        cout<<"Not stable"<<endl;
    }
    print(C2,a);
    if(isStable(C1,C2,a)){
        cout<<"Stable"<<endl;
    }else{
        cout<<"Not stable"<<endl;
    }
}
