#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int a[7],m;
    int right[25]={0,2,3,5,4,1,4,6,3,1,2,6,5,1,5,6,2,1,3,6,4,2,4,5,3};
    for(int i=1;i<7;i++)
    {
        cin>>a[i];
    }
    cin>>m;
    for(int i=0;i<m;i++)
    {
        int top,front;
        cin>>top>>front;
                top=int(find(a+1,a+7,top)-a);
                front=int(find(a+1,a+7,front)-a);
                int result=int(find(right+top*4-3,right+top*4,front)-right);
                if(result==top*4)
                    cout<<a[right[top*4-3]]<<endl;
                else
                    cout<<a[right[result+1]]<<endl;
    }
    return 0;
}

