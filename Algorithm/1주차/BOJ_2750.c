#include <stdio.h>
void bubble_sort(int l[], int n);

int main(void)
{
    int i, n, l[1000] = {0};
    
    scanf("%d", &n);
    
    for(i=0; i<n; i++)
    {
        scanf("%d", &l[i]);
    }
    bubble_sort(l, n);
    
    for(i=0; i<n; i++)
    {
        printf("%d\n", l[i]);
    }
    
    return 0;
}

void bubble_sort(int l[], int n)
{
    int i, j, temp;
    
    for(i = n-1 ; i>0; i--)
    {
        for(j=0; j<i; j++)
        {
            if(l[j]>l[j+1])
            {
                temp = l[j];
                l[j] = l[j+1];
                l[j+1] = temp;
            }
        }
    }
}
