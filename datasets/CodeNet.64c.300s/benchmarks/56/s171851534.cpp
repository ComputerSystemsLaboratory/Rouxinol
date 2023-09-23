#include<iostream>
#include<vector>

using namespace std;
int main(void)
{
    int n,y,m,d;
    cin>>n;
    int small=39*5;
    int big=200;
    while(n--){
        int c=0;
        cin>>y>>m>>d;
        
        if(y%3){
            if(m%2){
                c+=20-d;
            }
            else
                c+=19-d;
            m++;d=20;
            while(m<=10){
                if(m%2)
                    c+=20;
                else
                    c+=19;
                m++;
            }
            y++;
            d=20;
            m=10;
        }
        else{
            c-=d;
            while(m>1){
                c-=20;
                m--;
            }
        }
        if(y%3){
            c+=39*5;
            y++;
        }
        c+=200;
        c+=(999-y)/3*small*2+((999-y)/3)*big+1;
        cout<<c<<endl;
    }
}