#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

void toarr(int in,int len,vector<int> &v)
{
    for(int i=(int)pow(10,len-1);i>0;i/=10){
    	v.push_back(in/i);
    	in=in-in/i*i;
    }
}

int fromarr(vector<int> v)
{
    int num=1,sum=0;
    for(int i=0; i<v.size(); i++) {
        sum+=v[i]*num;
        num*=10;
    }
    return sum;
}

int main()
{
    for(;;) {
        int a,l;
        cin>>a>>l;
        if(l==0&&a==0)break;

        vector<int> ai;
        ai.push_back(a);

        bool end=false;
        //int count=1;
        while(!end) {
            vector<int> v;
            int min_num,max_num;
            toarr(a,l,v);
            sort(v.begin(),v.end());
            max_num=fromarr(v);
            sort(v.begin(),v.end(),greater<int>());
            min_num=fromarr(v);
            a=max_num-min_num;
            //cout<<"a["<<count<<"]: "<<a<<endl;
            //count++;

            for(int i=0; i<ai.size(); i++) {
                if(a==ai[i]) {
                    end=true;
                    cout<<i<<" "<<a<<" "<<ai.size()-i<<endl;
                    break;
                }
            }
            ai.push_back(a);
        }

        
    }
    return 0;
}