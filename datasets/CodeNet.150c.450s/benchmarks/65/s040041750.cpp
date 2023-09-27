#include<iostream>
#include<algorithm>
using namespace std;

int bubble(int n, char a[], int b[]){
    for(int i = 0; i < n; i++){
        for(int j = n-1; j > 0; j--){
            if(b[j] < b[j-1]){
                swap(b[j], b[j-1]);
                swap(a[j], a[j-1]);
            }
        }
    }
    return 0;
}
int selection(int n, char a[], int b[]){
    int minj;
    for(int i = 0; i < n; i++){
        minj = i;
        for(int j = i+1; j < n; j++){
            if(b[minj] > b[j]){
                minj = j;
            }
        }
        if(minj == i){
            continue;
        }
        else{
            swap(b[i], b[minj]);
            swap(a[i], a[minj]);
        }
        
    }
    

    return 0;
}
bool isstable(int n, char a[], char b[]){
    for(int i = 0; i < n; i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    return true;
}
int main(void){
    int n;
    cin >> n;
    int b[n]; 
    int b1[n];
    char c[n];
    for(int i = 0; i < n; i++){
        cin >> c[i] >> b[i];
    }
    char c1[n];
    for(int i = 0; i < n; i++){
        c1[i] = c[i];
        b1[i] = b[i];

    }
    
    bubble(n, c1, b1);
    selection(n, c, b);
    
    for(int i = 0; i < n; i++){
        if(i == 0){
            cout << c1[i] << b1[i];
        }
        else{
            cout << ' ' << c1[i] << b1[i];
        }
    }
    cout << endl << "Stable" << endl;
    for(int i = 0; i < n; i++){
        if(i == 0){
            cout << c[i] << b[i];
        }
        else{
            cout << ' ' << c[i] << b[i];
        }
    }
    if(isstable(n, c1, c)){
        cout << endl << "Stable" << endl;
    }
    else{
        cout << endl << "Not stable" << endl;
    }
}

