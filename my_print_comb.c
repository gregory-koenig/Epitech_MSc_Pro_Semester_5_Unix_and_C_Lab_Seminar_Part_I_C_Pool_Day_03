/*
** EPITECH PROJECT, 2019
** my_print_comb
** File description:
** CPool Day03 Task 05
*/

int check(int x, int y, int z)
{
    if (x != y && x != z && y != z && x < y && y < z) {
        my_putchar(x + 48);
        my_putchar(y + 48);
        my_putchar(z + 48);
        if (x == 7 && y == 8 && z == 9 && x < y && y < z) {
            return (0);
        } else {
            my_putchar(',');
            my_putchar(' ');
        }
    }
    return (0);
}

void loop(int i)
{
    for (int j = 1; j <= 8; j++) {
        for (int k = 2; k <= 9; k++) {
            check(i, j, k);
        }
    }
}

int my_print_comb(void)
{
    for (int i = 0; i <= 7; i++)
        loop(i);
}