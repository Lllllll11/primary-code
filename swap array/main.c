#include <stdio.h>
void Swap(int arr1[],int arr2[],int sz)
{
    //数组调用之后 在主函数和函数中可以一样的使用
    int i=0;
    for(i=0;i<sz;i++)
    {
        int tmp=arr1[i];
        arr1[i]=arr2[i];
        arr1[i]=tmp;
    }
}
void Print(int arr[],int sz)
{
    int i=0;
    for(i=0;i<sz;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}

int main()
{
    int arr1[]={1,2,3,4,5};
    int arr2[]={6,7,8,9,10};
    int sz=sizeof(arr1)/sizeof(arr1[0]);
    Swap(arr1,arr2,sz);
    Print(arr1,sz);
    Print(arr2,sz);
    return 0;
}
