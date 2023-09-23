#include<iostream>
using namespace std;

int main()
{
    int d;
    while(cin >> d){
        int allS=0;
        for(int i=0 ; i<600/d ; i++){
            allS += d*d*i*d*i;
        }
        cout << allS << endl;
    }
    return 0;
}