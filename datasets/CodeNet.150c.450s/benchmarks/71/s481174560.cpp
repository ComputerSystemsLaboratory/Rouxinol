#include<cstdio>


int
 n,ans;

int
 main()
 {
	
while
 (~scanf("%d"
,&n))
	
{
		
for
 (int
 f1 = 0; f1 < 10; f1++)
		
{
			
for
 (int
 f2 = 0; f2 < 10; f2++)
			
{
				
for
 (int
 f3 = 0; f3 < 10; f3++)
				
{
					
for
 (int
 f4 = 0; f4 < 10; f4++)
					
{
						
if
 (n == (f1 + f2 + f3 + f4))
							
ans++;
					
}
				
}
			
}
		
}
		
printf("%d\n"
,ans);
		
ans = 0;
	
}
 }