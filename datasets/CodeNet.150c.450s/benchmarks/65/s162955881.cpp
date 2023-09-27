#include<cstdio>

struct card
{
    int value;
    char name;
    int num;
    int sc;
};

int i,j;
card a[120],b[120];

void bubblesort(int n)
{
   for(i=0;i<n;i++)
    for(j=n-1;j>=i+1;j--)
   {
       if(a[j-1].value>a[j].value)
       {
           card temp;
           temp=a[j-1];
           a[j-1]=a[j];
           a[j]=temp;
       }
   }
}

void selectionSort(int n)
{
    int m;
    for(i=0;i<n;i++)
    {
        m=i;
        for(j=i;j<n;j++) if(b[j].value<b[m].value) m=j;
        if(m!=i){
           card temp;
           temp=b[m];
           b[m]=b[i];
           b[i]=temp;
        }
    }
}

int main()
{
    int n;

    while(~scanf("%d",&n))
    {
        getchar();
        for(i=0;i<n;i++)
        {
            a[i].sc=0;a[i].num=0;
            b[i].sc=0;b[i].num=0;
        }
        int l=0,flag1=0,flag2=0;
        while(n--) {scanf("%c%d",&a[l].name,&a[l].value);l++;b[l-1].value=a[l-1].value;b[l-1].name=a[l-1].name;getchar();}
        for(i=0;i<l;i++)
            for(j=i+1;j<l;j++)
            {
                if(a[j].value==a[i].value)
                a[i].num++;
                if(b[j].value==b[i].value)
                    b[i].num++;
            }
        bubblesort(l);
        selectionSort(l);
        for(i=0;i<l;i++) for(j=i+1;j<l;j++) {if(a[j].value==a[i].value) a[i].sc++;if(b[j].value==b[i].value) b[i].sc++;}
        for(i=0;i<l;i++)
        {
            if(a[i].num!=a[i].sc) flag1=1;if(b[i].num!=b[i].sc) flag2=1;
        }
        for(i=0;i<l;i++) printf("%c%d%c",a[i].name,a[i].value,(i==l-1)?'\n':' ');
         if(!flag1) printf("Stable\n"); else printf("Not stable\n");
        for(i=0;i<l;i++) printf("%c%d%c",b[i].name,b[i].value,(i==l-1)?'\n':' ');
         if(!flag2) printf("Stable\n"); else printf("Not stable\n");

    }

    return 0;
}
/*5
H4 C9 S4 D2 C3
2
S1 H1
*/