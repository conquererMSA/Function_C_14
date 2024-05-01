// #include<stdio.h>
// void fun(int arr[], int sz){
//     for(int i=0; i<sz; i++){
//         printf("%d ",arr[i]);
//     }
// }
// int main(){
//     int arr[5]={2,4,6,9,5};
//     fun(arr,5);
//     return 0;
// }

//floatttt
#include<stdio.h>
void fun(double arr[], int sz){
    for(int i=0; i<sz; i++){
        printf("%0.2lf ",arr[i]);
    }
}
int main(){
    double arr[5]={2.4,4.4,6.9,9.1,5.3};
    fun(arr,5);
    return 0;
}