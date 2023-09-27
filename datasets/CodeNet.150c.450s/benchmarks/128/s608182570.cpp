#include<string>
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
string s1;
while(cin>>s1)
{
reverse(s1.begin(),s1.end());
cout<<s1<<endl;

}
}