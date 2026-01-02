#include <stdio.h>    
#include <stdlib.h>
#include <string.h>    
    
char* intLuomaShuzi(int num) {    
    const char* alabodaoluoma[4][10] = {    
        {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"},    
        {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"},    
        {"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"},    
        {"", "M", "MM", "MMM"}    
    };    
    char luoma[20];     
    strcpy(luoma, alabodaoluoma[3][num / 1000 % 10]);    
    strcat(luoma, alabodaoluoma[2][num / 100 % 10]);    
    strcat(luoma, alabodaoluoma[1][num / 10 % 10]);    
    strcat(luoma, alabodaoluoma[0][num % 10]);    
        
    return strdup(luoma);     
}    
    
int main() {    
    int num;    
    printf("请输入范围在1-3999阿拉伯数字：");    
    scanf("%d", &num);    
        
    if (num < 1 || num > 3999) {    
        printf("你刚才输入的数字已经超过了1-3999这个范围。\n");    
        return 1;    
    }    
        
    char* luoma = intLuomaShuzi(num);    
    printf("%d对应的罗马数字是：%s\n", num, luoma);    
    free(luoma);     
        
    return 0;    
}