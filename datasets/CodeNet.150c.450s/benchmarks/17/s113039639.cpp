#include<iostream>
using namespace std;

int main()
{
    int a[5],c;
    for(int i=0 ; i<5 ; i++){
        cin >> a[i];
    }
    for(int i=0 ; i<4 ; i++){
        for(int j=i+1 ; j<5 ; j++){
            if(a[j]>a[i]){
                c=a[j];
                a[j]=a[i];
                a[i]=c;
            }
        }
    }
    for(int i=0 ; i<5 ; i++){
        cout << a[i];
        (i!=4) ? cout << ' ' : cout << '\n';
    }
    return 0;
}