#include<iostream>

using namespace std;

int main()
{
	int n;
	int i;
	int card_A,card_B;
	int ans_A,ans_B;
	
	for(;;)
	{
		cin >> n;
		if(n==0)
			break;
			
		ans_A=ans_B=0;
		
		for(i=0;i<n;i++)
		{
			cin >> card_A >> card_B ;
			if(card_A>card_B)
				ans_A+=card_A+card_B;
			else if(card_A == card_B)
			{
				ans_A+=card_A;
				ans_B+=card_B;
			}
			else
				ans_B+=card_A+card_B;
		}
		
		cout << ans_A << " " << ans_B << endl;
	}
}