#include<stdio.h>
#include<string.h>
int main(){
    char str[50];
    char *rev;
    int len;
    printf("Enter any string : ");
    scanf("%s",str);
    len = strlen(str);
    printf("Reverse string is : %s");
    for(int i=len;i>=0;i++)
	printf("%c",str[i]);
    return 0;
}
