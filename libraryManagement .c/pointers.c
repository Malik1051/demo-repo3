 #include <stdio.h> 
 int main (){
 int var1 = 20;
    int *ip;
    ip = &var1;
    printf("Address of var variable:%x\n ", &var1);
    printf("Address of *ip variable:%x\n",ip);
    printf("value of ip variable:%d", ip);

    return 0; 
 }