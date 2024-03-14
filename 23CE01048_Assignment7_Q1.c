#include <stdio.h>
#include <string.h>
int main (){
    char str[100];
    char ch;
    puts("Enter a string");
    gets(str);
    printf("Enter the character whose frequency has to be calculated");
    scanf("%c",&ch);
    int i=0,a=0;
    while(str[i]!='\0'){
        if(str[i]==ch){
            a++;
        }
        i++;

    }
    printf("%c occurs %d times",ch,a);
    return 0;

}