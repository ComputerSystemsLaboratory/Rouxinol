#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;
const int MAX=1000000000;
vector<int>prime;
bool primetable[MAX];
void PrimeTable(int x)
{
    primetable[0]=false;
    primetable[1]=false;
    for(int i=2;i<x;i++)
        primetable[i]=true;
    for(int i=2;i<sqrt(x);i++)
        if(primetable[i])
        {
            int j=i+i;
            while(j<x)
            {
                primetable[j]=false;
                j+=i;
            }
        }
}
bool isPrime(int x){
    if(x==2)return true;
    //if(x<2)return false;
    if(x<2 || x%2==0)return false;
    for(int i=3;i<=sqrt(x);i+=2)
        if(x%i==0)return false;
    return true;
}
void prime_factor(int x,vector<int> &res){
    if(isPrime(x)){
        res.push_back(x);
        return;
    }
    int i=2;
    while(x!=1){
        while(x%i==0)
        {
            res.push_back(i);
            x/=i;
        }
        i++;
    }

}
int main()
{
    int n;
    vector<int>res;
    cin>>n;
    prime_factor(n,res);
    //cout<<count<<endl;
    cout<<n<<':';
    for(int i=0;i<res.size();i++)
        cout<<' '<<res[i];
    cout<<endl;
}
