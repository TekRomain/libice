/*
** EPITECH PROJECT, 2022
** libice
** File description:
** ice/string.h
*/

#ifndef ICE_STRING_H
    #define ICE_STRING_H

    #include "ice/types.h"

/**
 * @brief Get the len of the str.
 * @param str that will be analysed.
 * @return The len of the str.
 */
ull_t ice_strlen(const char *str);

/**
 * @brief Swap two char of the str.
 * @param str that will be swapped.
 * @param a first char index that will be swapped.
 * @param b second char index that will be swapped.
 */
void ice_strswap(char *str, ull_t a, ull_t b);

/**
 * @brief Compare two str.
 * @param str1 that will be compared.
 * @param str2 that will be compared.
 * @return 0 if the str are equals, ascii difference if not.
 */
short ice_strcmp(const char *str1, const char *str2);

/**
 * @brief Compare n first char of two str.
 * @param str1 that will be compared.
 * @param str2 that will be compared.
 * @param n that will be compared.
 * @return 0 if the str are equals, ascii difference if not.
 */
short ice_strncmp(const char *str1, const char *str2, ull_t n);

/**
 * @brief Copy the str.
 * @param dest that will be copied.
 * @param str that will be copied.
 * @return Nothing.
 */
void ice_strcpy(char *dest, const char *str);

/**
 * @brief Copy n first char of the str.
 * @param dest that will be copied.
 * @param str that will be copied.
 * @param n that will be copied.
 * @return Nothing.
*/
void ice_strncpy(char *dest, const char *str, ull_t n);

/**
 * @brief Concat two str.
 * @param dest that will be concatenated.
 * @param str that will be concatenated.
 * @return Nothing.
 */
void ice_strcat(char *dest, const char *str);

/**
 * @brief Concat n first char of the str.
 * @param dest that will be concatenated.
 * @param str that will be concatenated.
 * @param n that will be concatenated.
 * @return Nothing.
 */
void ice_strncat(char *dest, const char *str, ull_t n);

/**
 * @brief Duplicate the str.
 * @param str that will be duplicated.
 * @return The duplicated str.
 */
char *ice_strdup(const char *str);

/**
 * @brief Duplicate n first char of the str.
 * @param str that will be duplicated.
 * @param n that will be duplicated.
 * @return The duplicated str.
 */
char *ice_strndup(const char *str, ull_t n);

/**
 * @brief Reverse the str.
 * @param str that will be reversed.
 */
void ice_strrev(char *str);

/**
 * @brief Reverse the n first character of the str.
 * @param str that will be reversed.
 * @param n number of character reversed.
 */
void ice_strnrev(char *str, ull_t n);

/**
 * @brief Split the str.
 * @param str that will be splitted.
 * @param delim that will be used to split the str.
 * @return The splitted str.
 */
char **ice_strsplit(char *str, char *delim);

#endif /* !ICE_STRING_H */
