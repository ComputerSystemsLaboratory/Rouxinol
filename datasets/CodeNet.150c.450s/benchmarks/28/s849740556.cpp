#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <queue>
using namespace std;
bool can(int max,int num2,vector<int>a,int num1){
    vector <int> m2;m2.push_back(0);
    for(int i=0;i<num1;i++) {
        if(a[i]+*(m2.end()-1)<=max) *(m2.end()-1)+=a[i];
        else m2.push_back(a[i]);
    }
     return (m2.size()<=num2);
}
int main()
{
    int num1,num2,tmp,max_;
    cin>>num1>>num2;
    vector<int> m,m3,copy;
    for(int i=0;i<num1;i++) {cin>>tmp;m.push_back(tmp);}
    copy=m;
    sort(copy.begin(),copy.end());
    if(copy[num1-1]>accumulate(m.begin(),m.end(),0)/num2)
    {max_=copy[num1-1];if(can(max_,num2,m,num1)) {cout<<max_<<endl;return 0;}}
    else max_=accumulate(m.begin(),m.end(),0)/num2;
    //cout<<"max_"<<max_<<endl;
    //cout<<"start:"<<start<<"end:"<<end<<endl;
    for(int i=max_;i<=max_+copy[num1-1];i++)
        if(can(i,num2,m,num1)) {cout<<i<<endl; return 0;}

}

