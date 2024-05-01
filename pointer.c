#include<stdio.h>
//call by reference
void fun(int *ptrX){
    printf("value of ptrX in fun \p\n",ptrX);
    *ptrX=300;
    printf("x er value in fun - %d\n",*ptrX);
}
int main(){
    int x=20;
    printf("address of x in main \p\n",&x);
    printf("x er value in main - %d\n",x);//20
    //memory address fun e pass korar age value change hoy na.
    fun(&x);
    printf("x er value in main - %d\n",x);
    return 0;
}

/*
x er value in main - 20
x er value in fun - 300
x er value in main - 300
*/