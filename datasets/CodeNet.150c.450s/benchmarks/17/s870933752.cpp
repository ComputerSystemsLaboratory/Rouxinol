#include <iostream>
using namespace std;
void bubble(int a[]);
int main(){
    int a[5];
    for(int i=0;i<5;i++)
        cin >> a[i];
    bubble(a);
    for(int i=0;i<4;i++)
        cout << a[i] << " " ;
    cout << a[4] << endl;
}

void bubble(int a[]){
    for(int i=0;i<4;i++){
        for(int j=0;j<4-i;j++){
            if(a[j]<a[j+1]){
                int tmp;
                tmp=a[j];
                a[j]=a[j+1];
                a[j+1]=tmp;
            }
        }
    }
}