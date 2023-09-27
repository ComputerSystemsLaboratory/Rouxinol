#include <iostream>
#include <string>
using namespace std;

int main(int argc, const char * argv[]) {
    int n;
    int i;
    int x[10000];
    int min,max;
    long sum=0;
    cin >> n;
    for(i=0; i<n; i++)
    cin >> x[i];
    min = x[0];
    max = x[0];
    
    for(i=0; i<n; i++){
        if(min>x[i]){
            min = x[i];
        } else if(max<x[i]){
            max = x[i];
        } else{
            
        }
        sum+=x[i];
    }
    
    cout << min <<" "<< max <<" "<< sum << endl;
    return 0;
}