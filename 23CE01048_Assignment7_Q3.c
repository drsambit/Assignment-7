#include <stdio.h>
#include<string.h>
void reverse (char str[],int m,int n){
    int i=m,j=n;
    if(i>j){
        puts("The reversed string is");
        puts(str);
        return ;
    }
    char temp=str[i];
    str[i]=str[j];
    str[j]=temp;
    i++;
    j--;
    reverse (str,i,j);
    return ;

}
int main (){
    char str[100];
    puts("Enter a string");
    gets(str);
    int i=0;
    while(str[i]!='\0'){
        i++;
    }
    int j=0;
    reverse(str,j,--i);
    return 0;
}