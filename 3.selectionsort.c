#include <stdio.h>
#include <limits.h>
int main(){
    int n;
    printf("enter the size of array:");
    scanf("%d",&n);
    
    int arr[n];
    printf("enter the elements of array:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<n-1;i++){
        int min=INT_MAX;
        int minidx=-1;
        for(int j=i;j<n;j++){
            if(min>arr[j]){
                min=arr[j];
                minidx=j;
            }
        }
            int temp=arr[minidx];
            arr[minidx]=arr[i];
            arr[i]=temp;
    }
    printf("sorted array is:");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
