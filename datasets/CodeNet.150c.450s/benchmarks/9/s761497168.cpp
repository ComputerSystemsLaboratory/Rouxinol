#include<iostream>
#include<queue>
#include<string>

using namespace std;

int main()
{
    string a;
    int n;
    for(;;){
        int s=0;
        cin >> a;
        if(a[0]=='-'&&(int)a.size()==1)return 0;
        else{
            cin >> n;
            int p[n];
            for(int i=0;i<n;i++){
                cin >> p[i];
                s+=p[i];
            }
            queue<char> q;
            for(int i=0;i<(int)a.size();i++){
                q.push(a[i]);
            }
            for(int i=0;i<s;i++){
                q.push(q.front());
                q.pop();
            }
            for(int i=0;i<(int)a.size();i++){
                cout << q.front();
                q.push(q.front());
                q.pop();
            }
            cout << endl;
        }
    }
}

