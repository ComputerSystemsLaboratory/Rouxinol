#include<iostream>
using namespace std;
int main(void)
{
    int student[32],n;
    for(int i=1;i<31;i++){
        student[i]=0;
    }
    for(int i=0;i<28;i++){
        cin>>n;
        student[n]=1;
    }
    for(int i=1;i<31;i++){
        if(student[i]==0)cout<<i<<"\n";
    }
}
/*入力例１
3
1
4
5
7
9
6
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30



　
*/