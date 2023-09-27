#include<iostream>
using namespace std;

void InvArray(int n, int fArray[]){
    for (int i = n; i > 0; i--)
    {
        cout << fArray[i];
        if (i>1) cout << " ";
    }
    cout << endl;
}

int main(){
    int a;
    int array[100]= {0};
    cin >> a;
    for (int i = 1; i <= a; i++)
    {
        cin >> array[i];
    }
    InvArray(a, array);
}