#include<stdio.h>
int main(void)
{
    int a[100], b[100], c1[100], d1[100],c2[100],d2[100],cans[100],dans[100];
    int i, h, w, x, y, num, lot;
    lot = 0;
    for (i = 0; i < 100; i++)
    {
        scanf("%d %d", &a[i], &b[i]);
        if (a[i] == b[i] && b[i] == 0)
        {
            break;
            num = i;
        }
        num = i;
    }
 
    for (i = 0; i <= num; i++)
    {
        x = a[i];
        y = b[i];
        c1[i] = x;
        d1[i] = y;
        c2[i] = x;
        d2[i] = y;
        for (w = 150; w >= 2; w--)
        {
            for (h = w - 1; h >= 1; h--)
            {
                if (w == 150 && h == 149)
                {
                    if (x*x + y*y<h*h+w*w)
                    {
                        c1[i] = h;
                        c1[i] = w;
                    }
                }
                if ((x*x + y*y )<( h*h + w*w)&&(h*h+w*w)<(c1[i]*c1[i]+d1[i]*d1[i]))
                {
                    c1[i] = h;
                    d1[i] = w;
                }
            }
        }
 
            for (w = 150; w >= 2; w--)
            {
                for (h = 1; h < w; h++)
                {
                    if ((c1[i] != h&&d1[i] != w) && (c1[i] * c1[i] + d1[i] * d1[i]) == h*h + w*w&&h <= c1[i])
                    {
                        c1[i] = h;
                        d1[i] = w;
                        w = 1;
                        h = 152;
                     
 
                    }
                }
            }
 
         
 
        for (w = 150; w >= 2; w--)
        {
            for (h = 1; h < w; h++)
            {
                if ((x!= h&&y!= w) &&( x * x + y * y)== h*h + w*w&&h > a[i])
                {
                    c2[i] = h;
                    d2[i] = w;
                    w = 1;
                    h = 152;
                }
            }
        }
    }
     
    for (i = 0; i <= num; i++)
    {
        if (c2[i] != a[i] || d2[i] != b[i])
        {
            printf("%d %d\n", c2[i], d2[i]);
        }
        else
        {
            printf("%d %d\n", c1[i], d1[i]);
        }
         
    }
 
    return 0;
}
