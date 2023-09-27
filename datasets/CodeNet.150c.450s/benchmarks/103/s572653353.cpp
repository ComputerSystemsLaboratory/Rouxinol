#include<iostream>
#include<array>
int main()
{
	while (true)
	{
		int num, sum;
		std::cin >> num >> sum;
		if (num == 0 && sum == 0)
		{
			break;
		}
		std::array<int, 9>nums{ 0,0,0,0,0,0,0,0,0 };
		auto calc_sum = [&nums]()
		{
			int s = 0;
			for (auto i : nums)
			{
				s += i;
			}
			return s;
		};
		int cnt = 0;
		for (int i = 0; i <= 10 - num; i++)
		{
			nums[0] = i;
			if (num == 1)
			{
				if (calc_sum() == sum)
				{
					cnt++;
				}
				continue;
			}
			for (int j = i + 1; j <= 11 - num; j++)
			{
				nums[1] = j;
				if (num == 2)
				{
					if (calc_sum() == sum)
					{
						cnt++;
					}
					continue;
				}
				for (int k = j + 1; k <= 12 - num; k++)
				{
					nums[2] = k;
					if (num == 3)
					{
						if (calc_sum() == sum)
						{
							cnt++;
						}
						continue;
					}
					for (int l = k + 1; l <= 13 - num; l++)
					{
						nums[3] = l;
						if (num == 4)
						{
							if (calc_sum() == sum)
							{
								cnt++;
							}
							continue;
						}
						for (int m = l + 1; m <= 14 - num; m++)
						{
							nums[4] = m;
							if (num == 5)
							{
								if (calc_sum() == sum)
								{
									cnt++;
								}
								continue;
							}
							for (int n = m + 1; n <= 15 - num; n++)
							{
								nums[5] = n;
								if (num == 6)
								{
									if (calc_sum() == sum)
									{
										cnt++;
									}
									continue;
								}
								for (int o = n + 1; o <= 16 - num; o++)
								{
									nums[6] = o;
									if (num == 7)
									{
										if (calc_sum() == sum)
										{
											cnt++;
										}
										continue;
									}
									for (int p = o + 1; p <= 17 - num; p++)
									{
										nums[7] = p;
										if (num == 8)
										{
											if (calc_sum() == sum)
											{
												cnt++;
											}
											continue;
										}
										for (int q = p + 1; q <= 18 - num; q++)
										{
											nums[8] = q;
											if (calc_sum() == sum)
											{
												cnt++;
											}
											continue;
										}
									}
								}
							}
						}
					}
				}
			}
		}
		std::cout << cnt << std::endl;
	}
	return 0;
}
