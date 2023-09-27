#include <iostream>
#include<string>
#include<math.h>
using namespace std;

int main(){
    int n,m;;
    cin>>m;
    int count=m;
    for(int s=0; s<m; s++){
        cin>>n;
        if(n==2) continue;
        else if(n%2==0)count--;
        else{
        for(int i=3; i<=sqrt(n); i+=2){
            if(n%i==0){count--;
            break;
            }
        }
        }
    }
    cout<<count<<endl;

    return 0;
}