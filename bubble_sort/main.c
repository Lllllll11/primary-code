#include <stdio.h>
//数组作为函数参数
void bubble_sort(int arr[],int sz)//这里接收必须使用[]
{
    int i;
    for(i=0;i<sz-1;i++) //每一趟冒泡排序
    {
        int flag=1;//假设 这一次要排序的数据已经有序，如果这一趟有序就证明全部有序了，直接跳出循环
        int j=0;
        for(j=0;j<sz-1-i;j++)//每一趟冒泡排序所需要两两比较的对数并不相同！要注意，每一趟都会比较出一个最大的
        {
            if(arr[j]>arr[j+1])
            {
                int tmp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=tmp;
                flag=0;//本趟其实没序
            }
        }
        if(1==flag)
            break;
    }
}

int main()
{
    int arr[]={9,8,7,6,5,4,3,2,1};//排成升序
    int i;
    int sz=sizeof(arr)/sizeof(arr[0]);
    bubble_sort(arr,sz);//这里传递数组不用[]
    for(i=0;i<sz;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
