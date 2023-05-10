#include "main.h"

/**
 * is_palindrome - formula that checks if a string is a palindrome
 * @s: string to check
 * @i: Iterator
 * @len: the length of the string
 *
 * Return: 1 if it is a palindrome, 0 it's not
 */
int find_strlen(char *s);
int check_palindrome(char *s, int len, int index);
int is_palindrome(char *s);

/**
 * find_strlen - Returns the length of a string
 * @s: the string to be measured
 *
 * Return: the length of the string
 */

int find_strlen(char *s)
{                                                                                                                                     
        int len = 0;                                                                                                                  
                                                                                                                                      
        if (*(s + len))                                                                                                               
        {                                                                                                                             
                len++;                                                                                                                
                len += find_strlen(s + len);                                                                                          
        }                                                                                                                             
                                                                                                                                      
        return (len);                                                                                                                 
}
