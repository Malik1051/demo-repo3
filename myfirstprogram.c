#include <stdio.h>


void myFunction() {
    char fullName [30];
    printf("what is your name?:\n");
    scanf("%s", fullName);
    printf("hello %s nice to meet you",fullName);
    

}

int main(){
    myFunction();
    int var1;
    char var2 [10];
    printf("Address of var1 variable:%x\n", &var1);
    printf("Address of var2 variable :%x\n", &var2);





    return 0;
}