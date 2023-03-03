/*
** EPITECH PROJECT, 2023
** libice
** File description:
** ice_sprintf.c
*/

#include <malloc.h>
#include <unistd.h>

#include "ice/printf/private.h"

ull_t ice_asprintf(char *restrict str, const char *restrict format, ...)
{
    va_list args;
    buffer_t buffer = {0};
    ull_t len;

    buffer.str = malloc(sizeof(char) * 1024);
    buffer.left = 1024;

    va_start(args, format);
    handle_format(&buffer, format, args);
    va_end(args);

    len = write(1, buffer.str, buffer.len);
    str[0] = *buffer.str;

    return len;
}
