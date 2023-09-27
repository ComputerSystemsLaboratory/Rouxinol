#include <iostream>
using namespace std;
 
struct Card{
    char suit;
    int value;
}; 
 
void bubble(struct Card A[],int n){
    for(int i=0;i<n;i++){
        for(int j=n-1;j>i;j--){
            if(A[j].value<A[j-1].value){
                Card t=A[j];
                A[j] = A[j-1];
                A[j-1] = t;
            }
        }
    }
}
 
void selection(struct Card A[],int n){
    int minj=0;
        for(int i=0;i<n;i++){
            minj=i;
            for(int j=i;j<n;j++){
                if(A[j].value<A[minj].value){
                    minj=j;
                }
            }
                Card t = A[i];
                    A[i]= A[minj];
                    A[minj] = t;
        }
}
 
bool isStabel(struct Card C1[],struct Card C2[],int n){
    for(int i=0;i<n;i++){
        if(C1[i].suit!=C2[i].suit)
        return false;
    }
    return true;
}
 
void print(struct Card A[],int n){
    for(int i=0;i<n;i++){
        if(i) cout<<" ";
        cout<<A[i].suit<<A[i].value; 
    }
    cout<<endl;
}
 
int main(){
    Card C1[100],C2[100];
    int n;
 
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>C1[i].suit>>C1[i].value;
    }
    for(int i=0;i<n;i++){
        C2[i]=C1[i];
    }
     
    bubble(C1,n);
    selection(C2,n);
     
    print(C1,n);
    cout<<"Stable"<<endl;
     
    print(C2,n);
    if(isStabel(C1,C2,n))
    cout<<"Stable"<<endl;
    else
    cout<<"Not stable"<<endl;
     
    return 0;
}