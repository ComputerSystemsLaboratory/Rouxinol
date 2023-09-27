#include <iostream>
#include <string>

using namespace std;

int main()
{
    string n;
    
    while(1){
    cin >> n;
    if(n=="-"){
        break;
    }
    int h;
    cin >> h;

    for(int i=0;i<h;i++){
        int s;
        cin >> s;
        n =  n.substr(s)+n.substr(0,s);
    }

    cout << n << endl;
    }
        
    return 0;
}