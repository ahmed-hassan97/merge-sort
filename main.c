#include <stdio.h>
#include <stdlib.h>
int i,j;
void merge(int left[],int right[],int arr[]);
void merge_sort(int arr[],int n);
int newarr[9];
int main()
{
int arr[9]={5,2,1,8,4,3,9,6,7};

printf("array you enter is \n ");

for(i=0;i<9;i++){
printf(" %d ",arr[i]);
}
printf("\narray after sorted  is \n ");

merge_sort(arr,9);
for(i=0;i<9;i++){
printf(" %d ",arr[i]);
}
    return 0;
}
void merge_sort(int arr[9],int n){

    if(n>1){
int middle=n/2;
int left[middle];
int right[n-middle];
for(i=0;i<middle;i++){
 left[i]=arr[i];
}
for(i=middle;i<n;i++){
 right[i-middle]=arr[i];
}
merge_sort(left,middle);
merge_sort(right,n-middle);
printf("%d  %d",middle,j);
merge(left,right,arr,middle,n-middle);

    }












}
void merge(int *left,int *right,int *ar){
   // int nl=sizeof(left)/4;
   //int nr=sizeof(right)/4;
int i=0;int j=0;int k=0;
while(i<nl&&j<nr){
    if(left[i]<=right[i]){
        arr[k]=left[i];
        k++;
        i++;
    }
    else{
        arr[k]=right[j];
        j++;
        k++;
    }

}
while(i<nl){
   arr[k]=left[i];
        k++;
        i++;
}
while(j<nr){
 arr[k]=right[j];
        j++;
        k++;
}
}

