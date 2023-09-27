#include <iostream>
#include <stack>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n,m;
    cin>>n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin>>a[i];
    }
    cin>>m;
    int temp;
    int count = 0;
    for(int i = 0; i < m; i++){
        cin>>temp;
        for(int j = 0; j < n; j++){
           if(a[j] == temp){
               count++;
               break;
           }
        }
    }
    cout<<count<<endl;
    return 0;





}