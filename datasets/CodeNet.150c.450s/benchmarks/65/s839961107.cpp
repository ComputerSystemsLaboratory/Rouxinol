#include <iostream>
using namespace std;

struct Card{
    char mark;
    int num;
};

void bubbleSort(struct Card a[],int n){
    int flag=1;
    for(int i=0;flag;i++){
        flag=0;
        for(int j=n-1;j>i;j--){
            if(a[j-1].num>a[j].num){
                swap(a[j],a[j-1]);
                flag=1;
            }
        }
    }
}
void selectionSort(struct Card a[],int n){
    for(int i=0;i<n-1;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if(a[min].num>a[j].num) min=j;
        }
        swap(a[i],a[min]);
    }
}

void print(struct Card a[],int n){
    string s="";
    for(int i=0;i<n;i++){
        cout<<s<<a[i].mark<<a[i].num;
        s=" ";
    }
    cout<<"\n";
}

bool isStable(struct Card C1[],struct Card C2[],int n){
    for(int i=0;i<n;i++){
        if(C1[i].mark!=C2[i].mark) return false;
    }
    return true;
}

int main(void){
    int n;
    cin>>n;
    Card C1[n],C2[n];
    for(int i=0;i<n;i++) cin>>C1[i].mark>>C1[i].num;
    for(int i=0;i<n;i++) C2[i]=C1[i];
    bubbleSort(C1,n);
    selectionSort(C2,n);
    print(C1,n);
    cout<<"Stable\n";
    print(C2,n);
    if(isStable(C1,C2,n)) cout<<"Stable\n";
    else cout<<"Not stable\n";
}
