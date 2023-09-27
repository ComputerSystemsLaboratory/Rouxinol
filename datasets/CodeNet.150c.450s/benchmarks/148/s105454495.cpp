#include<iostream>
using namespace std;
int main()

{
    int n,AC=0,WA=0,TLE=0,RE=0;
    string s;
    cin>>n;
    while(n--)
    {
        cin>>s;
        if(s=="AC") AC++;
        else if(s=="WA") WA++;
        else if(s=="TLE") TLE++;
        else RE++;
    }

    cout<<"AC x "<<AC<<endl;
    cout<<"WA x "<<WA<<endl;
    cout<<"TLE x "<<TLE<<endl;
    cout<<"RE x "<<RE<<endl;
    return 0;
}
