#include<stdio.h>

int main(){

       int a=180;
       int * b=&a;

       char*c=&a;


       printf("%d\n",*b);
       printf("%d\n",*c);

}
