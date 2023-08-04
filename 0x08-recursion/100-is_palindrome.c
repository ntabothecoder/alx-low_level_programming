#include "main.h"

/**
 * is_palindrome_recursive - finds out if a string is a palindrome
 * @n - string to be checked
 * @start 
 * @end
 * Return - a recursive call 
 */
int is_palindrome_recursive(const char* s, int start, int end) {
    if (start >= end)
        return(1);

    if (s[start] != s[end])
        return(0);

    return is_palindrome_recursive(s, start + 1, end - 1);
}

/**
 * _strlen - finds the lenght of the string
 * @s - string to be checked
 * Returns - lenghth
 */
int _strlen(char* s) {
    int length = 0;

    while (str[length] != '\0')
        length++;
    return length;
}

/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not
 * @s - string to be checked
 * Return - 1 if string is palindrome 0 if not
 */
int is_palindrome(char* s) {
    int len = _strlen(s);

    return is_palindrome_recursive(str, 0, len - 1);
}

