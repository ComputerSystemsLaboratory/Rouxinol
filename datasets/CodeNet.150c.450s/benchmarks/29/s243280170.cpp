#include <iostream>
using namespace std;
struct l
{
    int v;
    l* prv;
    l* next;
};
void DeleteNode(l* del, l** first, l** last)
{
    if (del->prv != NULL)
        del->prv->next = del->next;
    else
        *first = del->next;
        
    if (del->next != NULL)
        del->next->prv = del->prv;
    else
        *last = del->prv;

    delete del;
    del = NULL;
}
int main()
{
    l* t;
    l* first = NULL;
    l* last = NULL;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        long v; char s[12];
        cin >> s;
        if (s[0] == 'i')
        {
            l* t = new l();
            t->prv = NULL;
            t->next = NULL;
            cin >> t->v;
            if (last == NULL)
            {
                last = t;
            }
            else
            {
                first->prv = t;
            }
            t->next = first;
            first = t;
            continue;
        }

        if (first == NULL)
            continue;

        if (s[6] == 'F')
        {
            DeleteNode(first, &first, &last);
        }
        else if (s[6] == 'L')
        {
            DeleteNode(last, &first, &last);
        }
        else
        {
            long a;
            cin >> a;

            for (l* t = first; t != NULL; t = t->next)
            {
                if (t->v == a)
                {
                    DeleteNode(t, &first, &last);
                    break;
                }
            }
        }
    }

    t = first;
    while (t != NULL)
    {
        l* old = t;
        cout << t->v << (t->next != NULL ? " " : "\n");
        t = t->next;
        delete old;
    }
}

