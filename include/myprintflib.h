/*
** EPITECH PROJECT, 2023
** myprintflib.h
** File description:
** header file containing functions exposed in printf_flags_*.a
*/

#ifndef MYPRINTF_H_
    #define MYPRINTF_H_

int sin_dec(va_list args);
int unsin_dec(va_list args);
int octal(va_list args);
int hex_low(va_list args);
int hex_up(va_list args);
int flt(va_list args);
int chars(va_list args);
int strs(va_list args);
int ptr_ad(va_list args);
int perc(va_list args);

#endif
