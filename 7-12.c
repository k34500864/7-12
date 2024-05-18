#include<stdio.h>
#include<math.h>

int main(void) {
    int a, i, num, sum = 0;
    int n; // 用于存储位数

    scanf("%d", &a);
    n = (int)log10(a)+1; // 计算位数

    for (i = 1; i <= n; i++) {
        double temp = pow(10, i); // 计算10的i次方
        //printf("%d", temp);
        int digit = (int)temp; // 转换为整数
        num = a % digit; // 使用整数类型的digit
        (int)num = num / pow(10, i - 1);
        sum += pow(num, n); // 注意这里是+=而不是=
    }
    if (sum == a)
    {
        printf("%d是Armstrong number", a);
    }
    return 0;
}
