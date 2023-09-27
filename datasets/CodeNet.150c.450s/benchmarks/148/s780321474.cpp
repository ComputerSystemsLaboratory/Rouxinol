#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int N, i,AC=0,WA=0, TLE=0,RE=0;
    char str[1000];
    cin>>N;
    for(i=0; i<N ;i++)
    {
        cin>>str;
        if(!strcmp(str, "AC"))
        {
            AC++;
        }
        if(!strcmp(str,"WA"))
        {
            WA++;
        }
         if(!strcmp(str, "TLE"))
        {
            TLE++;
        }
         if(!strcmp(str, "RE"))
        {
            RE++;
        }
        
    }
    
cout<<"AC x "<< AC<<endl;
cout<<"WA x "<< WA<<endl;
cout<<"TLE x "<< TLE<<endl;
cout<<"RE x "<< RE<<endl;
 
return 0;
}