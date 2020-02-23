/*
** EPITECH PROJECT, 2019
** my_print_comb
** File description:
** CPool Day03 Task 05
*/

int is_end(int x, int y)
{
    if (x == 98 && y == 99) {
        return (0);
    } else {
        my_putchar(',');
        my_putchar(' ');
    }
    return (0);
}

int my_print_comb2(void)
{
    int nb1 = 0;
    int nb2 = 1;

    while (nb1 <= 99) {
        while (nb2 <= 99) {
            my_putchar(nb1 / 10 + '0');
            my_putchar(nb1 % 10 + '0');
            my_putchar(' ');
            my_putchar(nb2 / 10 + '0');
            my_putchar(nb2 % 10 + '0');
            is_end(nb1, nb2);
            nb2++;
        }
        nb1++;
        nb2 = nb1 + 1;
    }
}