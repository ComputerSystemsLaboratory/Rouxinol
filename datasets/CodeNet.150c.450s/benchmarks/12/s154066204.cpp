#include<iostream>
using namespace std;
#define MAX 1000000

int parent(int i){return i/2;}
int left(int i){return 2*i;}
int right(int i){return 2*i+1;}

int main(){
    int i,key[MAX],n;
    
    cin >> n;
    
    for( i = 1;i <= n;i++)cin >> key[i];
    for( i = 1;i <= n;i++){
        cout << "node " << i << ": key = " << key[i] << ", ";
        if(parent(i) >= 1)cout << "parent key = " << key[i/2] << ", ";
        if(left(i) <= n)cout << "left key = " << key[2*i] << ", ";
        if(right(i) <= n)cout << "right key = " << key[2*i+1] << ", ";
        cout << endl;
    }
}
