#include <stdio.h>

int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    //int arr[]={1,2,3,4,5,6,8,9,10,11};
    int a=7;
    int left=0;
    int sz=sizeof(arr)/sizeof(arr[0]);//此处arr不用带[]，arr代表数组，带上[]报错
    int right = sz-1;
    while(left<=right)
    {
        int mid =(left+right)/2; //下表
        if(arr[mid]<a)//下表对应的数的比较
            left=mid+1;
        else if(arr[mid]>a)
            right=mid-1;
        else
        {
            printf("got it,the subscript is:%d",mid);
            break;
        }

    }
    if(left>right)
        printf("search failure");
    return 0;
}
