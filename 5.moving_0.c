//given a integer array. Move all 0's at the last keeping the relative distance same of non-negative entries.
#include <stdio.h>
#include <stdbool.h>
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
        for(int j=0;j<n;j++){
            if(arr[j]==0 && arr[j+1]!=0){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}