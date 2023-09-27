#include<iostream>
#include<algorithm>

bool listen_input(int &inputNum)
{
	using namespace std;
	
	cin>>inputNum;
	if(cin.eof())
	{
		return false;
	}
	else
	{
		return true;
	}
}

class Sums//コンストラクタで全10000通りの和を格納、count_~の呼び出しでこれらを数え上げる
{
private:
	int sum[10000];
	void calc_increase(int []);
	void increase_eachDigit(const int,int[]);
public:
	Sums();
	int count_combination(const int);
};

Sums::Sums()
{
	int nums[5]={};
	int tmp_sum=0;
	
	sum[0]=0;//(a,b,c,d)=(0,0,0,0)
	for(int roop=1;1;roop++)
	{
		calc_increase(nums);//(a,b,c,d)=(1,0,0,0)から全解探索
		if(nums[4])
		{
			break;
		}
		
		tmp_sum=0;
		for(int roop_sum=0;roop_sum<4;roop_sum++)
		{
			tmp_sum+=nums[roop_sum];
		}
		sum[roop]=tmp_sum;
	}
	
	std::sort(sum,sum+10000);
}

void Sums::calc_increase(int nums[])
{
	nums[0]++;
	for(int roop=0;roop<4;roop++)
	{
		increase_eachDigit(roop,nums);
	}
}

void Sums::increase_eachDigit(int digitNum,int nums[])
{
	if(nums[digitNum]==10)
	{
		nums[digitNum]=0;
		nums[digitNum+1]++;
	}
}

int Sums::count_combination(const int inputNum)
{
	int count=0;
	
	for(int roop=0;roop<10000;roop++)
	{
		if(sum[roop]==inputNum)
		{
			count++;
		}
		else if(sum[roop]>inputNum)
		{
			break;
		}
	}
	
	return count;
}

int main()
{
	Sums inst_sum;
	
	int inputNum;
	while(listen_input(inputNum))
	{
		std::cout<<inst_sum.count_combination(inputNum)<<std::endl;
	}
	
	return 0;
}