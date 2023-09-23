#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int loan = 100000;
    for(int i=0; i<n; i++){
        loan = loan * 1.05;
        if(loan%1000 != 0){
            loan = loan/1000;
            loan = loan * 1000;
            loan = loan + 1000;
        }
    }

    
    cout <<loan<<endl;
    
    return 0;
}