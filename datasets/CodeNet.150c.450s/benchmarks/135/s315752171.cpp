#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    int w[1500],h[1500];
    cin >> n >> m;
    for(int i = 0;i<n;i++)
        scanf("%d", &w[i]);
    for(int i = 0;i<m;i++)
        scanf("%d", &h[i]);
    while(n)
    {
        vector<int> x(1501*1001);
        vector<int> y(1501*1001);
        for(int i =0;i<n;i++)
        {	
        	int a = 0;
            for(int j = i;j<n;j++)
            {
                a+=w[j];
                x[a]++;
            }
        }
        for(int i =0;i<m;i++)
        {
        	int b = 0;
            for(int j = i;j<m;j++)
            {
                b+=h[j];
                y[b]++;
            }
        }

        int ave=0;
        for(int i =0;i<1500*1000;i++){
        	//if(y[i]!=0)cout << i << " " << y[i] << " / ";
            ave+=x[i]*y[i];
        }
        cout <<ave<<endl;



        cin >>n>>m;
    for(int i = 0;i<n;i++)
        scanf("%d", &w[i]);
    for(int i = 0;i<m;i++)
        scanf("%d", &h[i]);
    }
    return 0;
}


