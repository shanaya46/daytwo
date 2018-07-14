#include <stdio.h>

void ft_print_combo (){
    for (int a = 0; a <= 7; a++){
        for (int b = a+1; b <= 8; b++) {
            for (int c = b+1; c <= 9; c++){
                printf("%d%d%d, ", a, b, c);
            }
        }
    }
}


int main() {
   ft_print_combo();
}