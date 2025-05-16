// #include <cinttypes>
#include <cstdio>
// #include <iostream>
 

using namespace std;

int main(){


    int var = 22;
// printf(var);

    // test comment

    // variable declarationu
    int *mypointer;
    // int var = 69;
    mypointer = &var; 
    int var2 = *mypointer; //pointer dereference

printf("Hello Pointer\n");
printf("mypointer: %p\n", mypointer );



printf("var: %d\n", var );
printf("var2: %d\n" , var2 );

int var3 = 200;
int *myp;
myp = &var3;

printf("myp value: %p\n", myp);
 printf("var3 value: %d\n" , var3);



return  0;

}