#include <stdio.h> //print
#include <stdlib.h> //malloc
#include <stdbool.h> //bool


int compare (void *first, void *second)
{
    if (*(int*)first > *(int*)second)
        return 1;
    else if (*(int*)first < *(int*)second)
        return -1;
    else
        return 0;
}
int main(void)
{
    int n[10001] ={};
    int line;
    int new;
    scanf("%d", &line);
    
    for(int i=0; i<line; i++)
    {
        scanf("%d", &new);
        n[new]++;
    }
    for(int i=0; i<10001; i++)
    {
        for(int j=0;j<n[i];j++)
            printf("%d\n", i);
    }
    return 0;
}

