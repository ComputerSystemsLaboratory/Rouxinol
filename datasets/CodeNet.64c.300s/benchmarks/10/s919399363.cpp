#include <iostream>

using namespace std;

inline void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

int main(){
    const int DATASET_COUNT = 3000;

    int a, b;
    for(int i=0; i<DATASET_COUNT; ++i)
    {
        cin >> a >> b;
        if(a==0 && b==0) break;
        if(a>b) swap(a, b);
        cout << a << " " << b << endl;
    }
    
    return 0;
}
