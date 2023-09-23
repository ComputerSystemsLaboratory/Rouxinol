#include <iostream>
using namespace std;

int select(int *a, int num){
    int change=0;
    for(int i=0;i<num;i++){
        int minj = i;
        for(int j=i;j<num;j++){
            if(a[minj]>a[j])
                minj = j;
        }
        if(i!=minj)
            change++;
        swap(a[i],a[minj]);
    }
    for(int i=0;i<num-1;i++){
        cout << a[i] << " ";
    }
    cout << a[num-1] << endl;
    return change;
}


int main(){
    int num; cin >> num;
    int a[num];
    for(int i=0;i<num;i++){
        cin >> a[i];
    }
    cout << select(a,num) << endl;

}