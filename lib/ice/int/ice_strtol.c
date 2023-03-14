/*
** EPITECH PROJECT, 2023
** libice
** File description:
** ice_strtol.c
*/

#include "ice/types.h"

ll_t ice_strtol(const char *str, char **endptr)
{
    ull_t i = 0;
    ll_t nb = 0;
    int signe = 1;

    for (; (str[i] == '+') || (str[i] == '-'); i++)
        if (str[i] == '-')
            signe *= -1;
    for (; ('0' <= str[i]) && (str[i] <= '9'); i++)
        nb = nb * 10 + str[i] - 48;
    nb *= signe;
    if (endptr)
        *endptr = (char *)str + i;
    return nb;
}