#include <iostream>
using namespace std;

struct card{
    char suit;
    int value;
};

void selection(struct card a[], int n){
    for (int i=0; i<n; i++){
        int minj=i;
        for (int j=i; j<n; j++){
            if (a[j].value <a[minj].value){
                minj=j;
            }
        }
        swap(a[i],a[minj]);
    }
}

void bubble(struct card a[],int n){
    for (int i=1;i<n; i++){
        for (int j=n-1; j>=i; j--){
            if (a[j].value <a[j-1].value){
                swap(a[j],a[j-1]);
            }
        }
    }
}

void print (struct card a[], int n){
    for (int i=0; i<n-1; i++){
        cout <<a[i].suit <<a[i].value <<" " ;
    }
    cout << a[n-1].suit <<a[n-1].value<<endl;
}

bool isStable(struct card c1[], struct card c2[], int n){
    for (int i=0; i<n; i++){
        if (c1[i].suit != c2[i].suit){
            return false;
        }
    }
    return true;
}

int main(){
    int n;
    cin >>n;
    struct card c1[n],c2[n];
    for (int i=0; i<n; i++){
        cin >> c1[i].suit >> c1[i].value ;
    }
    for (int i=0; i<n; i++){
        c2[i]=c1[i];
        
    }
    bubble(c1,n);
    print(c1,n);
    cout << "Stable" <<endl;

    selection(c2,n);
    print(c2,n);
    if (isStable(c1,c2,n)){
        cout <<"Stable" <<endl;
    }
    else {
        cout << "Not stable" <<endl;
    }
}
