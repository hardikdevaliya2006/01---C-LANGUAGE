// Reading the file (fget).
#include<stdio.h>
int main(){

    FILE *data;
    data = fopen("hardik.txt","r");
    char str[100];

    while(/*fscanf(data,"%s",str)!=EOF */
        fgets(str,100,data)!=NULL)
    {
        printf("%s",str);
    }

    fclose(data);

    return 0;
}