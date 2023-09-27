#include <iostream>

using namespace std;
int main(void){
    int max=-2147483648;
    int min=2147483647;
    long sum=0;
    
    int n,in;
    cin >> n;

    for (int i=0;i<n;i++){
        cin >> in;    
        if(min>in) min=in;
        
        if(max<in) max=in;

        sum = sum + in;
    }

    cout << min <<" "<< max <<" "<< sum << endl;            

    return 0;
}
