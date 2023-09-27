#include<iostream>
#include<vector>
#include<stack>
using namespace std;

int main(){
    stack<int> land;//地形栈
    stack<pair<int, int> > area;//每个元素储存当前位置与当前位置的面积
    vector<int> res;//用于输出结果的向量
    char str[20005];
    cin>>str;
    char *p=str;
    for(int i=0; *p!='\0'; p++,i++){
        if(*p=='\\'){
            land.push(i);
        }else if(*p=='/'&&land.size()>0){
            int out=land.top();
            int nowArea = i-out;
            land.pop();
            while(area.size()>0&&(area.top().first)>out){
                nowArea+=area.top().second;
                area.pop();
            }
            area.push(make_pair(out, nowArea));
        }
    }
    int allArea = 0;
    int flag = area.size();
    int temp;
    for(int i = 0;i<flag;i++){
        temp = area.top().second;
        allArea+=temp;
        res.push_back(temp);
        area.pop();
    }
    cout<<allArea<<"\n"<<flag;
    for(int i=res.size()-1;i>=0;i--){
        cout<<' '<<res[i];
    }
    cout<<endl;
    return 0;
}

