#include <iostream>
#include <string>
using namespace std;
int main()
{
long long n , a=0 , w=0 , t=0 , r=0;
string ar;
cin>>n;
for(long long i=0 ; i<n ; i++)
{
    cin>>ar;
    if(ar == "AC"){
        a++;
    } else if(ar == "WA"){
        w++;
    }else if(ar == "TLE"){
        t++;
    }else if(ar == "RE"){
        r++;
    }
}
cout<<"AC"<<" "<< "x" <<" "<<a<<endl;
cout<<"WA"<<" "<< "x" <<" "<<w<<endl;
cout<<"TLE"<<" "<< "x" <<" "<<t<<endl;
cout<<"RE"<<" "<< "x" <<" "<<r<<endl;
return 0;
}