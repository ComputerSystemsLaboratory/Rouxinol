//0022 Maximum Sum Sequece

//2<=n<=5000ÂÌñ©çA×Ú·éÌaÌÅålð¦æ
//È¨AÌlÍ-10`10ÌÍÍÅ é
//KÉâÁ½ç°i(1¨n-1){i*(n-i)}ñÅ]TÅlÞ©
//Æè ¦¸Ag¤ñÌÉV½ÉÁíÁ½àÌð«µÄAÁ¦éàÌðø­ûjÅ¢¢©


#include<iostream>
#include<algorithm>
#include<numeric>
#include<climits>
using namespace std;

int main(void)
{
	const int N = 5000;
	int n;
	while(cin >> n, n)
	{
		int i, j;
		int a[N];
		int sum, max_sum = INT_MIN;

		for(i = 0; i < n; i++)
			cin >> a[i];

		//iÂÌðg¤
		for(i = 1; i <= n; i++)
		{
			//Ü¸ÍAÜÆÜÁÄg¤ªÌaðvZµÄ¨­
			sum = accumulate(a, a+i, 0);
			max_sum = max(sum, max_sum);

			for(j = 0; j+i < n; j++)
			{
				//ÌÂðg¢Ü·
				sum -= a[j];
				sum += a[j+i];
				max_sum = max(max_sum, sum);
			}
		}

		cout << max_sum << endl;
	}
	return 0;
}