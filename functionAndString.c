#include<stdio.h>
#include<string.h>
void fun(char *stArr){
    int len=strlen(stArr);
    for(int i=0; i<len; i++){
        printf("%c ",stArr[i]);
    }
}
int main(){
    char ar[20]="Hello";
    //**arr er kkhetre size patathe hoy, kintu string e size patathe hoy na.
    fun(ar);
    return 0;
}