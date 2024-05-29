// Write the file (fputs).
#include<stdio.h>
int main(){

    FILE *data;
    char str[] = "Hellow ,this is write mode";

    data = fopen("write.txt","w");

    fputs(str,data);

    fclose(data);
    
    return 0;
}