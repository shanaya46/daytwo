#include <stdio.h>

void ft_print_numbers() {

    for (char ch = '0'; ch <= '9'; ch++) {
      putchar(ch);
    }
    printf("\n");
}

int main() {
   ft_print_numbers();
}