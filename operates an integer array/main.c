#include<stdio.h>
void init(int arr[],int sz)
{
    //传址调用
    int i = 0;
    for (i = 0; i < sz; i++)
    {
        //*(arr + i) = 0;
        arr[i]=0;//这里不太理解，注意！
    }
}

void reverse(int arr[], int sz1)
{

    //使用left 或者 right 作为下标进行改变也可以
    int i = 0;
    for (i=0;i<=sz1/2;i++)
    {
        int tmp = arr[sz1 - 1 - i];
        arr[sz1 - 1 - i] = arr[i];
        arr[i] = tmp;
    }
}
int main()
{
    int i = 0;
    int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9,10 };
    int arr1[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 ,10,11,12};
    int sz = sizeof(arr) / sizeof(arr[0]);
    int sz1 = sizeof(arr1) / sizeof(arr[0]);
    init(arr,sz);
    for (i = 0; i < sz; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    reverse(arr1, sz1);
    for (i = 0; i < sz1; i++)
    {
        printf("%d ", arr1[i]);
    }
    printf("\n");
    return 0;
}
