#include <stdio.h>
#include <ctype.h>
int main()
{

    FILE *paragraph, *digit, *cap, *small, *special;
    char str[200], ch;
    int i = 0;

    paragraph = fopen("all.txt", "w");
    cap = fopen("capiatal.txt", "w");
    small = fopen("small.txt", "w");
    digit = fopen("digit.txt", "w");
    special = fopen("special.txt", "w");

    printf("Enter the peragraph : ");
    ch = getchar();

    while (ch != '@')
    {
        str[i] = ch;
        ch = getchar();
        i++;
    }

    fputs(str, paragraph);
    fclose(paragraph);

    paragraph = fopen("all.txt","r");

    while ((ch = fgetc(paragraph)) != EOF)
    {
        if (isdigit(ch))
        {
            fputc(ch,digit);
        }
        else if (isupper(ch))
        {
            fputc(ch,cap);
        }
        else if (islower(ch))
        {
            fputc(ch,small);
        }
        else {
            fputc(ch,special);  
        }
    }

    fclose(paragraph);
    fclose(cap);
    fclose(small);
    fclose(digit);
    fclose(special);

    return 0;
}