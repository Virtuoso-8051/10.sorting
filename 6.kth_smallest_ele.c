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

    for(int i=0;i<n-1;i++){
        bool flag=true;
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                flag=false;
            }
        }
        if(flag==true) break;
    }

    int k;
    printf("enter order of smallest term:");
    scanf("%d",&k);
    printf("%dth smallest element is %d",k,arr[k-1]);
    return 0;
}