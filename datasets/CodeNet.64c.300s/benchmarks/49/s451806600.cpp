#include<iostream>
#include<cstring> 
#include<sstream>
using namespace std;
int main()
{
    long long x, y, a;
    
    while(cin>>x>>y) {
        a=x+y;
        ostringstream os;
        os << a;
        string b = os.str();
        
        cout<< b.size() << endl;
    }
    return 0;
    
}