//输入三个整数，用条件运算符 ?: 输出最大值。
#include <stdio.h>
int main() {
    int a, b, c, max;
    printf("请输入三个整数：");
    scanf("%d %d %d", &a, &b, &c);

    // 使用条件运算符 ?: 求最大值
    // max = a > b && a > c ? a : (b >a && b > c ? b : c);
    // a 大于 b 且 a 大于 c，则最大值为 a，否则判断 b 是否大于 a 且大于 c，如果是，则最大值为 b，否则最大值为 c

    // max = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
    // a 大于 b，则判断 a 是否大于 c，如果是，则最大值为 a，否则最大值为 c；如果 a 不大于 b，则判断 b 是否大于 c，如果是，则最大值为 b，否则最大值为 c

    max = (a > b) ? a : b;      // 先比较 a 和 b，得到较大值
    max = (max > c) ? max : c;  // 再将较大值与 c 比较，得到最终最大值

    printf("最大值是：%d\n", max);
    return 0;
}