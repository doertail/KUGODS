#include <stdio.h>
#include <stdlib.h>

int* func(int n){
    int* arr = (int *)malloc(sizeof(int) * n);
    for(int i=0; i<n; i++)
        scanf("%d", &arr[i]);

    return arr;
}
void BubbleSort(int* arr, int n){
    for(int i=n-1; i>1; i--)
        for(int j=0; j<i; j++)
        {
            if(arr[j] > arr[j+1] )
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
}

void PrintTheArr(int arr[], int cnt){
    for(int i = 0; i < cnt; ++i){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main(){
    int num_cnt;
    scanf("%d", &num_cnt);

    int* num = func(num_cnt);

    PrintTheArr(num, num_cnt);
    BubbleSort(num, num_cnt);
    PrintTheArr(num, num_cnt);

    free(num);

    return 0; 
}