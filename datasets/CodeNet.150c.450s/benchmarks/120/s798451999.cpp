// //bitset操作
// #include <iostream>
// #include <bitset>
// #include <algorithm>
 
// using namespace std;
 
// bitset<5> cookie[10]; 

// int main()
// {
 
//     int R, C;bool upwards;
// 	while(cin >> R >> C && R > 0)
// 	{
// 		int i, j;
// 		for (i = 0; i < R; ++i)
// 		{
// 			for (j = 0; j < C; ++j)
// 			{			
// 				cin >> upwards;
// 				cookie[i][j] = upwards;
// 			}
// 		}
// 		// 在横向一共有2^R种变换
// 		int permute_r = 1 << R;
// 		int result = 0;
// 		for (i = 0; i < permute_r ; ++i)
// 		{	
// 			// 完成当前的变换
// 			for (j = 0; j < R; ++j)
// 			{
// 				//cout<<cookie[j]<<endl;
// 				int temp=1<<j;
// 				cout<<endl;
// 				cout<<i<<" "<<temp<<endl;
// 				int res=i&(1<<j);
// 				cout<<res<<endl;
// 				cout<<endl;
// 				// 这一行是否应当翻个面
// 				if (i & (1 << j))
// 				{
// 					cookie[j].flip();
// 				//	cout<<cookie[j]<<endl;
// 				}
// 			}
// 			// 对每一列分别算出朝上和朝下的煎饼个数，取其最大值
// 			int possible_answer = 0;
// 			for (j = 0; j < C; ++j)
// 			{
// 				int up_cookie_count = 0;
// 				for (int k = 0; k < R; ++k)
// 				{
// 					if (cookie[k][j])
// 					{
// 						++up_cookie_count;
// 					}
// 				}
// 				possible_answer += max(up_cookie_count, R - up_cookie_count);
// 			}
// 			// 结果取最大值
// 			result = max(result, possible_answer);			
// 			for (j = 0; j < R; ++j)
// 			{
// 				if (i & (1 << j))
// 				{
// 					cookie[j].flip();
// 				}
// 			}
// 		}
// 		cout << result << endl;
// 	}
 
//     return 0;
// }
//dfs
#include<iostream>
#include<cstdio>
#include<bitset>

using namespace std;

#define rep(i,a,b) for(int i=a;i<b;i++)
int readint(){int n;scanf("%d",&n);return n;}

bitset<10000>bookie[10];
int r,c,res;

void dfs(int row)
{
	if(row==r){
		int temp=0,temp1;
		rep(i,0,c){
			temp1=0;
			rep(j,0,r){
				if(bookie[j][i]==0){
					temp1++;
				}
			}
			temp+=max(temp1,r-temp1);
		}
		if(res<temp){
			res=temp;                 
		}
		return ;
	}
	rep(i,0,2){
		if(i==0){
			dfs(row+1);
		}
		if(i==1){
			bookie[row].flip();
			dfs(row+1);
			bookie[row].flip();
		}
	}
}

int main()
{
	while(cin>>r>>c){
		if(r==0&&c==0){
			break;
		}else{
			rep(i,0,r){
				rep(j,0,c){
					bookie[i][j]=readint();
				}
			}
			res=0;
			dfs(0);
			cout<<res<<endl;
		}
	}
	return 0;
}


