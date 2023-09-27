#include<iostream>
#include<math.h>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int w;
char ch;
    int num[31];
    cin>>w;
    for(int i=1;i<=w;i++){
        num[i]=i;
    }
   int n;
   cin>>n;
   while(n--){
       int a,b;
       cin>>a>>ch>>b;
        swap(num[a],num[b]);
   }
   for(int i=1;i<=w;i++){
       cout<<num[i]<<endl;
   }
    return 0;
}
