#include<iostream>
     
using namespace std;
     
int main()
{
    int i, n;
    i = 1;
 
    do{
    cin >> n;
    if(n != 0){
        cout << "Case " << i << ": " << n << endl;
        i++;
    }
 
    }while(n != 0);
     
    return 0;
}