#include<bits/stdc++.h>

using namespace std;

int main()
{
    queue<string>qp;
    queue<int>qt;

    int n,quantum,count=0;

    cin>>n;
    cin>>quantum;

    for(int i=0;i<n;i++)
    {
        int t;
        string p;

        cin>>p;
        cin>>t;

        getchar();

        qp.push(p);
        qt.push(t);


    }
   // cout<<qp.size()<<" "<<qt.size()<<endl;
    int c=qt.size();
    for(int i=0;i<c;i++)
    {

        int time=qt.front();

        if(quantum<time)
        {
            int diff=time-quantum;
            count=count+quantum;

            string process=qp.front();

            //cout<<process<<endl;

            qp.pop();
            qt.pop();
            qp.push(process);
            qt.push(diff);
            c++;
        }
        else
        {
            count=count+(qt.front());

            cout<<qp.front()<<" "<< count <<endl;

            qp.pop();
            qt.pop();
        }
    }

    return 0;
}

