#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define BUF_SIZE 1024


int main(){
    char s[BUF_SIZE];
    char res[BUF_SIZE];
    scanf("%s", s);
    for (int i= 0; i < strlen(s); i++){
        char convert= '\0';
        switch(s[i]){
            case 'A':
                convert= '4';
                break;
            case 'E':
                convert= '3';
                break;
            case 'G':
                convert= '6';
                break;
            case 'I':
                convert= '1';
                break;
            case 'O':
                convert= '0';
                break;
            case 'S':
                convert= '5';
                break;
            case 'Z':
                convert= '2';
                break;  
            default:
                convert= s[i];       
        }
        res[i]= convert;
    }
    printf("%s", res);
}