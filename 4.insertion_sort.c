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

    for(int i=1;i<n;i++){
        int j=i;
        while(j>=1 && arr[j]<arr[j-1]){
            int temp=arr[j];
            arr[j]=arr[j-1];
            arr[j-1]=temp;
            j--;
        }
    }
    printf("sorted array is:");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}