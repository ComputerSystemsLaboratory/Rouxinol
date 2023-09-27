#include<iostream>
using namespace std;
int main()
{
int n,s,R;
while(cin>>n>>s&&n!=0||s!=0)
{
	R=0;
	if(s<=45)
	{
		for(int j=0;j<10;j++)
		{	
			if(n>=2)
			{
				for(int k=j+1;k<10;k++)
				{		
					if(n>=3)
					{
						for(int l=k+1;l<10;l++)
						{
							if(n>=4)
							{
								for(int m=l+1;m<10;m++)
								{	
									if(n>=5)
									{
										for(int o=m+1;o<10;o++)
										{
											if(n>=6)
											{
												for(int p=o+1;p<10;p++)
												{
													if(n>=7)
													{
														for(int q=p+1;q<10;q++)
														{
															if(n>=8)
															{
																for(int r=q+1;r<10;r++)
																{
																	if(n>=9)
																	{
																		for(int t=r+1;t<10;t++)
																		{
																		if(j+k+l+m+o+p+q+r+t==s)
																		{
																		R++;	
																		}	
																		}
																	}
																	else if(j+k+l+m+o+p+q+r==s)
																	{
																	R++;	
																	}
																}
															}
															else if(j+k+l+m+o+p+q==s)
															{
															R++;	
															}
														}
													}
													else if(j+k+l+m+o+p==s)
													{
													R++;	
													}
												}	
											}
											else if(j+k+l+m+o==s)
											{
											R++;	
											}
										}
									}
									else if(j+k+l+m==s)
									{
									R++;	
									}
								}
							}
							else if(j+k+l==s)
							{
							R++;	
							}
						}				
					}
					else if(j+k==s)
					{
					R++;	
					}	
				}	
			}
			else if(j==s)
			{
			R++;	
			}	
		}
	}		
	cout<<R<<endl;
}
return 0;
}