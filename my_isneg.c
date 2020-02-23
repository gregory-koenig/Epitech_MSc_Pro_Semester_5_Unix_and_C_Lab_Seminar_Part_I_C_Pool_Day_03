/*
** EPITECH PROJECT, 2019
** my_isneg
** File description:
** CPool Day03 Task 05
*/

int my_isneg(int n)
{
    if (n < 0) {
        my_putchar('N');
    } else if (n >= 0) {
        my_putchar('P');
    }
}