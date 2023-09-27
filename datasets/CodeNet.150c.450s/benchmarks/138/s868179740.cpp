#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
typedef long long ll;
using namespace std;

int gcd(int a,int b){
    if(a%b==0){
        return b;
    }
    else{
        return gcd(b,a%b);
    }
}

int main(void){
    int a,b;
    cin>>a>>b;
    
    cout<<gcd(a,b)<<endl;

	return 0;
}
