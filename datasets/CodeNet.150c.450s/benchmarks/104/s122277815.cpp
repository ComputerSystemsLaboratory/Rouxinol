#include<iostream>

using namespace std;

int main()
{
        int n = 0;
        cin >> n;

        int count = 0;
        cin >> count;

        int i;

        int num[n];

        for(i=0;i<n;i++)
        {
                num[i] = i + 1;
                //cout << num[i] <<endl;
        }

        int a,b;
        int temp;

        for(i = 0;i < count;i++)
        {
                scanf("%d,%d",&a,&b);
                temp = num[a-1];
                num[a-1] = num[b-1];
                num[b-1] = temp;
        } 
        for(i = 0;i < n;i++)
        {
                cout << num[i] << endl;
        } 

}