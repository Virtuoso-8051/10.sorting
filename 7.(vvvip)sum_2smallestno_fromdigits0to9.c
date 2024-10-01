//given an array of digits i.e 0 to 9. Find the minimum possible sum of two numbers formed using all the digits.
/*s-1: sort the array.
  s-2: form number n1 from sorted array.
  s-3: now second smallest number is just swapping last two dogits if they are different, if same then go for second and third last and so on.
  s-4: form n2.
  s-5: add*/
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

    for(int i=0;i<n-1;i++){                   //s-1: sorting done.
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
    
    printf("sorted array in ascending order:"); //just printed sorted array.
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    int n1=0;                                //formed n1.
    for(int i=0;i<n;i++){
        n1=n1+arr[i];
        n1=n1*10;
    }
    n1=n1/10;

        
    if(arr[n-1]!=arr[n-2]){              //code to form array for n2.
        int temp=arr[n-1];
        arr[n-1]=arr[n-2];
        arr[n-2]=temp; 
    }
    else if(arr[n-1]==arr[n-2]){
        for(int i=n-2;i>=0;i--){
            if(arr[i]!=arr[i-1]){
                int temp=arr[i];
                arr[i]=arr[i-1];
                arr[i-1]=temp;
                break;
            }
            else i--;
        }
    }

    int n2=0;                          //formed n2.
    for(int i=0;i<n;i++){
        n2=n2+arr[i];
        n2=n2*10;
    }
    n2=n2/10;

    int sum=n1+n2;                   //added n1 and n2.
    printf("minimum sum of two possible numbers %d and %d are %d",n1,n2,sum);
    return 0;
}