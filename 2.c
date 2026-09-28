//判断一个整数是否能被 3 和 5 同时整除。
#include <stdio.h>
int main() {
    int num;
    printf("请输入一个整数：");
    scanf("%d", &num);

    // 使用条件运算符 ?: 判断是否能被 3 和 5 同时整除
    (num % 3 == 0 && num % 5 == 0) ? 
        printf("%d 能被 3 和 5 同时整除。\n", num) : 
        printf("%d 不能被 3 和 5 同时整除。\n", num);

    return 0;
}