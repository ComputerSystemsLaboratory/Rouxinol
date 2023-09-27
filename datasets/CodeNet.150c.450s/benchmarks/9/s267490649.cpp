#include <iostream>
#include <string>
using namespace std;

int main()
{ 
    while(true){
    
    string n;
    cin>>n;
    if(n=="-"){break;}
    else{
    int x;
    cin>>x;
    for(int i=0;i<x;i++){
        int s;
        cin>>s;
        s-=1;
        n=n.substr(s+1,n.size()-s)+n.substr(0,s+1);
        
    }
cout<<n<<endl;
}
}
    return 0;
}
