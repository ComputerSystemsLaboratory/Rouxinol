#include <iostream>
#include <queue>
using namespace std;

int main()
{
    int n;
    while(cin>>n){
        
        if(n==0){
            break;
        }
        priority_queue<int> maxpq;
        int a, b=0;
        
        for(int i=0; i<n; i++){
            cin >> a;
            maxpq.push(a);
        }
        
        maxpq.pop();
        
        for(int i=0; i<n-2; i++){
            b +=maxpq.top();
            maxpq.pop();
        }
        
        cout << b/(n-2) << endl;
    }
    
    return 0;
}