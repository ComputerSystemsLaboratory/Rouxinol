#include <iostream>
#include <cstdlib>
#include <stack>
#include <algorithm>
#include <queue>

using namespace std;

int main(){
    int n,timeSlot;
    cin>>n>>timeSlot;
    queue<pair<string, int> > Q;
    string name;
    int time;

    for(int i = 0;i<n;i++){
        cin>>name>>time;
        Q.push(make_pair(name,time));
    }


    // ????§??¨??????¶??´????????¬
    int timeMark = 0; //??¶??´??????
    int usedTime = 0;
    while(!Q.empty()){
        pair<string, int> task = Q.front();
        Q.pop();
        usedTime = min(timeSlot,task.second);
        task.second -= usedTime;
        timeMark += usedTime;
        if(task.second > 0){
            Q.push(task);
        } else {
            cout<<task.first<<" "<<timeMark<<endl;
        }
    }


    return 0;
}