#include<stdio.h>
//array ke dereference korle 0th index er value pawya zay. *arr=2;
arr[1]=1[arr]
arr[1]=*(arr+1)
arr[1]=*(1+arr)
arr[1]=1[arr]
int main(){
    int arr[5]={2,5,7,4,8};
    // printf("0th index er address - %p\n",&arr[0]);
    // printf("arr er address - %p\n",arr);
    //arr er 0th index er address and arr er address same

//    printf("0th index er value - %d\n",arr[0]);
//    printf("deref e 0th index er value - %d\n",*arr);
   //int *arr=&arr[0]
  
//   printf("1 index er value - %d\n",arr[1]); //5
//   printf("1 index er valu by derefere - %d\n",*(arr+1)); //5
arr[1]=1[arr]//5
arr[1]=*(arr+1)//5
arr[1]=*(1+arr)//5
arr[1]=1[arr]//5

    return 0;
}
/*
arr[1]=1[arr]
arr[1]=*(arr+1)
arr[1]=*(1+arr)
arr[1]=1[arr]
0th index er address - 0061FF0C
arr er address - 0061FF0C
*/