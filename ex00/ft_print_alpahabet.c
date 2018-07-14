#include <stdio.h>

void ft_print_alphabet() {

    for (char ch = 'a'; ch <= 'z'; ch++) {
      putchar(ch);
    }
    printf("\n");
}

int main() {
   // printf() displays the string inside quotation
   ft_print_alphabet();
}