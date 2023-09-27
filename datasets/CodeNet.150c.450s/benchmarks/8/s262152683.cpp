#include<iostream>
#include<string>
using namespace std;
int main(){
    int n,a=0,b=0;
    string x,y;
    cin >> n;
    
    for(int i=0;i<n;i++){
        cin >> x >> y;
        if(x>y) a+=3;
        else if(x<y) b+=3;
        else{
            a++;
            b++;
        }
    }cout << a << " " << b << endl;
    
    
}
