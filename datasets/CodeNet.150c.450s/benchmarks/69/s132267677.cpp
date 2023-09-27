#include <iostream>
using namespace std;
int ch[12],one,two,g,q;

int DFS(int g){
if(g == 10)
    {
        q=0;
        return 1;
    }
else
{
    for(int i = g; i < 10; i++){
        for(int k = 1; k >= 0; k--)
        {
            if(q == 0) return 1;
            if(k && ch[i] > one)
                {
                    one = ch[i];
                    DFS(i+1);
                }
            else if(!k && ch[i] > two)
                {
                    two = ch[i];
                    DFS(i+1);
                }
            else if(ch[i] < two &&ch[i] < one)
                {
                    return 0;
                }
        }
    }
}
return 0;
}
int main()
{
    int n;
    cin >> n;
    while(n--){
     for(int i = 0; i < 10; i++)
        cin >> ch[i];
     one = ch[0];
     two = 0;
     q=1;
     if(DFS(1)) cout << "YES" << endl;
     else cout << "NO" << endl;
    }
    return 0;
}