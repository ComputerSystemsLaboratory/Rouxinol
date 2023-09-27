#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int a,b,c;
    string str;
    cin >> a >> b >> c ;
   
    if(a<b && b<c){
        str = "Yes";
    }else{
    str = "No";
    }

    cout << str  << endl;
return 0;
}