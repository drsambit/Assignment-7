#include <stdio.h>
#include<string.h>
int main (){
    char str[100];
    puts("Enter a string");
    gets(str);
    int i=0;
    while(str[i]!='\0'){
        if(!((str[i]>=65 && str[i]<=90) || (str[i]>=97 && str[i]<=122))){
            str[i]='\0';

        }
        i++;
    }
    puts("The modified string is");
    
    for(int j=0;j<i;j++){
        if(str[j]!='\0'){
            printf("%c",str[j]);
        }
    }
    return 0;

}