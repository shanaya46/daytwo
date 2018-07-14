#include <stdio.h>

void ft_print_comb2 (){
    for (int a = 0; a <= 98; a++){
        for (int b = a + 1; b <= 99; b++){
            if (a != b) {
                printf ("%02d %02d, ", a, b);
        }
    }
    }

    printf("\n");
}


int main() {
   ft_print_comb2();
}