#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
   vector <int>a;
   int i,input;
   for(i=0;i<10;i++)
   {
       cin>>input;
       a.push_back(input);
   }
   sort(a.begin(),a.end());
   reverse(a.begin(),a.end());
    for(i=0;i<3;i++)
        cout<<a[i]<<endl;
    return 0;
}

