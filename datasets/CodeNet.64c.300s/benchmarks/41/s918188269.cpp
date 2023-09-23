/**
 * ?????????(?????§???)
 *
 * @author skywang
 * @date 2014/03/07
 */

#include <iostream>
#include <cstdio>
using namespace std;
const int MAX = 500010;

static int m_heap[100000];        // ??°???
static int m_capacity=100000;    // ????????????
static int m_size=0;        // ????????????(????§???????0)
int Array[MAX];
int n;
/* 
 * ?????§?????????????°???´??????
 *
 * ??¨?????°????????°?????????????¬¬N?????????????????????????´¢?????????(2N+1)????????????????´¢??????(2N+2)???
 *
 * ?????°??´??????
 *     start -- ?¢?????°??????????????§???????(?????¬???0?????¨???????¬¬1???????§?)
 *     end   -- ???????????´(?????¬?????°??????????????????????´?????´¢???)
 */
void maxheap_filterdown(int start, int end)
{
    int cur = start;          // ??????(current)???????????????
    int left = 2 * cur + 1;     // ???(left)???????????????
    int value = Array[cur];    // ??????(current)???????????§?°?

    while(left <= end)
    {
        // "left"???????????????"left+1"????????????
        if(left < end && Array[left] < Array[left + 1])
            left++;        // ?????????????????????????????§?????????m_heap[left+1]
        if(value >= Array[left])
            break;        //?°???´??????
        else
        {
            Array[cur] = Array[left];
            cur = left;
            left = 2 * left + 1;   
        }       
    }   
    Array[cur] = value;
}
  
/* 
 * ?????°?????????
 *
 * ????????????
 *     0?????¨?????????
 *    -1?????¨?????±?´\
 */
void maxheap_print()
{
    for (int i=0; i < n; i++)
        printf(" %d", Array[i]);
    printf("\n");
}
    
int main()
{
    scanf("%d", &n);
    for(int i=0; i < n; i++)
    {
        scanf("%d", &Array[i]);
    }
    for(int i = n / 2; i >=0 ;i--)
        maxheap_filterdown(i, n);

    maxheap_print();
    
    return 0;
}