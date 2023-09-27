#include <iostream>
using namespace std;
int n,s,spn;
void sp(int ne,int ns,bool* flag)
{
	if (ne > n) return;
	if (ne == n && ns == s) spn++;
    for(int i=0;i<10;++i){
        if(!flag[i]){
            flag[i]=true;
            sp(ne+1,ns+i,flag);
			flag[i] = false;
		}
    }
}

int perm(int n)
{
	return (n ? n * perm(n - 1) : 1);
}

int main()
{
    while(1)
    {
        cin>>n>>s;if(!n)return 0;
        spn=0;
        bool flag[10]={false};
        sp(0,0,flag);
        spn /= perm(n);
        cout<<spn<<endl;
    }
    return 0;
}