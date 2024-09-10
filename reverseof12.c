#include <stdio.h>

int main() {
    int i, num = 12;
    printf("Multiplication table of %d:\n", num);

    for (i = 10; i >= 1; --i) {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    
}
