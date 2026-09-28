//输入三个整数，用条件运算符 ?: 输出最大值。
#include <stdio.h>
int main() {
    int a, b, c, max;
    printf("请输入三个整数：");
    scanf("%d %d %d", &a, &b, &c);

    // 使用条件运算符 ?: 求最大值
    max = a > b && a > c ? a : (b >a && b > c ? b : c);

    printf("最大值是：%d\n", max);
    return 0;
}