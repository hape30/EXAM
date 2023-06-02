#include <stdio.h>
int sumFoo(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i*i*i*i + i*i*i;
    }
    return sum;
int result = sumFoo(5); // вычисляем сумму для n=5
printf("%d\n", result); 

};