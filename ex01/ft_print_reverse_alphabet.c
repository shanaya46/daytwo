#include <stdio.h>

void ft_print_reverse_alphabet() {

    for (char ch = 'z'; ch >= 'a'; ch--) {
      putchar(ch);
    }
    printf("\n");
}

int main() {
   // printf() displays the string inside quotation
   ft_print_reverse_alphabet();
}