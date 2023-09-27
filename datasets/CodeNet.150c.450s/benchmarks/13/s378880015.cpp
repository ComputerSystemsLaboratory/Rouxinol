#include <iostream>
#include <string>
using namespace std;
int main(void){
    // Here your code !
 
    string p;
    string s;
    
    cin>>p;
    cin>>s;
    
    p+=p;
    

    string::size_type hantei = p.find(s);
    
    if(hantei!=string::npos)
        cout<<"Yes"<<endl;
        else
        cout<<"No"<<endl;
}