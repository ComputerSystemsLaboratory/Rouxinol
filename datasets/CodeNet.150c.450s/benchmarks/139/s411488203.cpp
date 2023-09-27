#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array

struct Node{
    int Num;
    int length = 0;
    set<Node*> reach;
};


int N,M,A,B;
Node a[100001];
int r[100001];

void solve(){

    cin >> N >> M;
    

    for (int i = 0; i < N; i++)
    {
        a[i].Num = i;
        r[i] = 0;
    }
    
    for (int i = 0; i < M; i++)
    {
        cin >> A >> B;
        A--;
        B--;

        a[A].reach.insert(&a[B]);
        a[B].reach.insert(&a[A]);
    }
    

    vector<Node*> queue;
    vector<Node*> nextqueue;
    queue.push_back(&a[0]);
    r[0] =1;

    int cur = 1;
    while (!queue.empty())
    {
        for (auto q : queue)
        {
            //cout << "in Queue " << q->Num << endl;
            for (auto rea : q->reach)
            {
                if(r[rea->Num] == 0){
                    rea->length = q->Num+1;
                    r[rea->Num] = 1;
                    nextqueue.push_back(rea);
                }
            }
            
        }
        
        cur++;
        queue = nextqueue;
        nextqueue.clear();
    }
    


    bool flag = false;
    for (int i = 0; i < N; i++)
    {
        if(r[i] ==0) flag == true;
    }
    
    if(flag){
        cout << "No"<< endl;
    }
    else{
        cout << "Yes" << endl;
        for (int i = 1; i < N; i++)
        {
            cout << a[i].length << endl;
        }
        
    }

}





int main(){

    ios::sync_with_stdio(false);
    cin.tie(0);

    solve();

}