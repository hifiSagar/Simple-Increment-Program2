
#include<stdio.h>
int main(){
int a = 10, b,c;
b= (a++,++a);
c=(a++,++a);
printf("value of a is: %d\n",a);
printf("value of b is: %d\n",b);
printf("value of c is: %d\n",c);                         /*This program is not running in this file, 
                                                            /*It will run in another file*/
return 0;
}

