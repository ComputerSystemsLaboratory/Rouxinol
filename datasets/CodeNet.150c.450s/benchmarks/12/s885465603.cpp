#include<iostream>
#include<vector>

using namespace std;

int parent(int i){return i/2;}
int right(int i){return 2*i+1;}
int left(int i){return 2*i;}

int main()
{
    int n;
    vector<int> node;
    cin>>n;
    node.emplace_back(-1);
    for (int i = 1; i < n+1; i++)
    {
        int key;
        cin>>key;
        node.emplace_back(key);
    }
    for (int i = 1; i <= n; i++)
    {
        cout<<"node "<<i<<": "<<"key = "<<node[i]<<", ";
        if(parent(i)>=1)cout<<"parent key = "<<node[parent(i)]<<", ";
        if(left(i)<=n)cout<<"left key = "<<node[left(i)]<<", ";
        if(right(i)<=n)cout<<"right key = "<<node[right(i)]<<", ";
        cout<<endl;
    }
    return 0;
}

