#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int>cur;
vector<int>his;
int main()
{
    int a,l,count,now;
    while(true){
        count=0;
        his.clear();
        cin>>a>>l;
        his.push_back(a);
        if(a==0&&l==0)
            break;
        while(true){
            count++;
            int big=0,small=0;
            cur.clear();
            while(a>0){
                cur.push_back(a%10);
                a/=10;
            }
            while(cur.size()<l)
                cur.push_back(0);
            sort(cur.begin(),cur.end());
            for(int i=0;i<l;i++){
                small+=cur[i];
                big+=cur[l-i-1];
                if(i<l-1){
                    big*=10;
                    small*=10;
                }
            }
            now=big-small;
            unsigned long f=find(his.begin(), his.end(), now)-his.begin();
            if(f!=his.size()){
                cout<<f<<" "<<now<<" "<<count-f<<endl;
                break;
            }
            his.push_back(now);
            a=now;
        }
    }
}