#include<stdio.h>
int main()
{
  char c;
  int n;
  int out;
  int end;
  int i;
  scanf("%d",&n);
  for(i=0;i<n+1;i++)
    {
      end=0;
      while(1)
	{
	  out=0;
	  while(1)
	    {
	      scanf("%c",&c);
	      if(out==0)
		{
		  switch(c)
		    {
		    case '1':
		      out=1;
		      break;
		    case '2':
		      out=6;
		      break;
		    case '3':
		      out=9;
		      break;
		    case '4':
		      out=12;
		      break;
		    case '5':
		      out=15;
		      break;
		    case '6':
		      out=18;
		      break;
		    case '7':
		      out=21;
		      break;
		    case '8':
		      out=25;
		      break;
		    case '9':
		      out=28;
		      break;
		    }
		}
	      else
		{
		  switch(c)
		    {
		    case '1':
		      if(out==5) out=1;
		      else out++;
		      break;
		    case '2':
		      if(out==8) out=6;
		      else out++;
		      break;
		    case '3':
		      if(out==11) out=9;
		      else out++;
		      break;
		    case '4':
		      if(out==14) out=12;
		      else out++;
		      break;
		    case '5':
		      if(out==17) out=15;
		      else out++;
		      break;
		    case '6':
		      if(out==20) out=18;
		      else out++;
		      break;
		    case '7':
		      if(out==24) out=21;
		      else out++;
		      break;
		    case '8':
		      if(out==27) out=25;
		      else out++;
		      break;
		    case '9':
		      if(out==31) out=28;
		      else out++;
		      break;
		    }
		}
	      if(c=='\n')
		{
		  end=1;
		  break;
		}
	      if(c=='0') break;
	    }
	  switch(out)
	    {
	    case 1:
	      printf(".");
	      break;
	    case 2:
	      printf(",");
	      break;
	    case 3:
	      printf("!");
	      break;
	    case 4:
	      printf("?");
	      break;
	    case 5:
	      printf(" ");
	      break;
	    case 6:
	      printf("a");
	      break;
	    case 7:
	      printf("b");
	      break;
	    case 8:
	      printf("c");
	      break;
	    case 9:
	      printf("d");
	      break;
	    case 10:
	      printf("e");
	      break;
	    case 11:
	      printf("f");
	      break;
	    case 12:
	      printf("g");
	      break;
	    case 13:
	      printf("h");
	      break;
	    case 14:
	      printf("i");
	      break;
	    case 15:
	      printf("j");
	      break;
	    case 16:
	      printf("k");
	      break;
	    case 17:
	      printf("l");
	      break;
	    case 18:
	      printf("m");
	      break;
	    case 19:
	      printf("n");
	      break;
	    case 20:
	      printf("o");
	      break;
	    case 21:
	      printf("p");
	      break;
	    case 22:
	      printf("q");
	      break;
	    case 23:
	      printf("r");
	      break;
	    case 24:
	      printf("s");
	      break;
	    case 25:
	      printf("t");
	      break;
	    case 26:
	      printf("u");
	      break;
	    case 27:
	      printf("v");
	      break;
	    case 28:
	      printf("w");
	      break;
	    case 29:
	      printf("x");
	      break;
	    case 30:
	      printf("y");
	      break;
	    case 31:
	      printf("z");
	      break;
	    }
	  if(end) break;
	}
      if(i!=0) printf("\n");	 
    }
  return 0;
}