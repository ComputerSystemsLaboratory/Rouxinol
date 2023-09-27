#include <iostream>

using namespace std;
struct card {char suit, value;};

bool stable_or(struct card c1[],struct card c2[],int n){
    for(int i = 0;i < n;i++){
        if(c1[i].suit != c2[i].suit){
            return false;
        }
    }
    return true;
}

void bubble_sort(int n,card c[]){
    int i,j;

    for(i = 0;i < n;i++){
        for(j = n - 1;j >= i + 1;j--){
            if(c[j].value < c[j - 1].value){
                card box = c[j];
                c[j] = c[j - 1];
                c[j - 1] = box;
            }
        }
    }

    for(i = 0;i < n;i++){
        if(i > 0){
            cout << ' ';
        }
        cout << c[i].suit << c[i].value;
    }
    cout << endl << "Stable" << endl;
    
}

void select_sort(int n,card c[]){
    int i,j,minj;

    for(i = 0;i < n;i++){
        minj = i;
        for(j = i;j < n;j++){
            if(c[j].value < c[minj].value){
                minj = j;
            }
        }
        card box = c[i];
        c[i] = c[minj];
        c[minj] = box;
    }

     for(i = 0;i < n;i++){
        if(i > 0){
            cout << ' ';
        }
        cout << c[i].suit << c[i].value;
    }
    cout << endl;
    
}

int main() {
    int n,i;
    card c1[100],c2[100];
    char ch;

    cin >> n;

    for(i = 0;i < n;i++){
        cin >> c1[i].suit >> c1[i].value;
        c2[i] = c1[i];
    }
      
    bubble_sort(n,c1);
    select_sort(n,c2);

    if(stable_or(c1,c2,n)){
        cout << "Stable" << endl;
    }
    else {
        cout << "Not stable" << endl;
    }
    
    return 0;
}