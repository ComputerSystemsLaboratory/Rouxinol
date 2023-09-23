#include<iostream>
using namespace std;

int main()
{
    int x=1; 
    int i=0;
    while(x!=0){
        cin >> x;
        i++;
        if(x==0){
            break;
        }
        cout << "Case " << i << ": " << x << endl;
    }
    return 0;
    
}
