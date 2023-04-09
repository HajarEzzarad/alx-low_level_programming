#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - adds positive numbers.
 * @argc: number of command line arguments.
 * @argv: array that contains the program command line arguments.
 * Return: 0 - success.
 */

int main(int argc, char *argv[]) {
    int sum = 0;
    if (argc == 1) {
        printf("0\n");
        return 0;
    }
    for (int i = 1; i < argc; i++) {
        char *str = argv[i];
        while (*str) {
            if (!isdigit(*str)) {
                printf("Error\n");
                return 1;
            }
            str++;
        }
        sum += atoi(argv[i]);
    }
    printf("%d\n", sum);
    return 0;
}
