#include <iostream>
using namespace std;
int main(void){
    int n;
    cin>>n;
    
    int array[n];
    for(int i=0;i<n;i++)
    {
        int x;
        cin >> x;
        array[i]=x;
    }
    
    for(int i=n-1;i>=0;i--){
        cout << array[i];
        if(i>0)
            cout << " " ;
    }
    cout << endl;

}