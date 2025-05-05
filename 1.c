#include <stdio.h>

int max(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    int num1 = 10, num2 = 20;
    printf("Максимум между %d и %d: %d\n", num1, num2, max(num1, num2));
    return 0;
}
