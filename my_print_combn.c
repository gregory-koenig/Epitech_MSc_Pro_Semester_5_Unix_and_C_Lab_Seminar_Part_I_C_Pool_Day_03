/*
** EPITECH PROJECT, 2019
** my_print_combn
** File description:
** CPool Day03 Task 09
*/

int my_print_combn(int n)
{
    for (int i = 0; i <= n; i++) {
        my_putchar(i + 48);
    }

    my_putchar(',');
    my_putchar(' ');
    if (n > 0)
        my_print_combn(n - 1);
    return (0);
}