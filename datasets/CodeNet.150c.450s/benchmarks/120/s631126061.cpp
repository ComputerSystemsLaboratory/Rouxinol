#include <iostream>
#include <bitset>
#include <cstring>
#include <algorithm>
using namespace std;
int r,c,ans,num;
bitset<10005> g[15];

int main()
{
   cin>>r>>c;
	while(r&&c)
	{
	    for (int i = 1; i <= r; i++) {
        for (int j = 1; j <= c; j++) {
            cin>>num;
			g[i][j]=num;
        }
        }
       ans=0;
   //每一行都有是否翻转这2种情况，最多2的r次方种。
		//从0000000000～1111111111，等于1的，对应行翻身，等于0的，对应行不翻身
        for(int i=0;i<(1<<r);i++)
		{
			 
			//把i表示成二进制字符串,从右数第row_id位上的数字是否为1
			for(int row_id=0;row_id<=9;row_id++)
			{
				if(!(i>>row_id)) break;
				if((i>>row_id)&1) g[row_id+1].flip();
			}
			//不必真的翻转列。取每一列朝向数较多的
			int temp=0;
			int shang;
			int xia;
			for(int j=1;j<=c;j++)
			{
				shang=0;
				
				for(int k=1;k<=r;k++)
				{
					if(g[k][j]) shang++;
					
				}
				xia=r-shang;
				if(shang>=xia) temp+=shang;
				else temp+=xia;
			}
			ans=ans>temp?ans:temp;
			//恢复原状
			for(int row_id=0;row_id<=9;row_id++)
			{
				if(!(i>>row_id)) break;
				if((i>>row_id)&1) g[row_id+1].flip();
			}
		}
		cout<<ans<<endl;
		cin>>r>>c;
	}

	
	
   return 0;
}
