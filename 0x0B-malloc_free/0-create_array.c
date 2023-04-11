#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars,and initializes it with a specific char.
 * @size: size of the array.
 * @c: storaged char.
 * Return: pointer of an array of chars, or NULL if it fails.
 */
char *create_array(unsigned int size, char c)
{
    unsigned int i;
    
    if (size == 0)
    {
        return (NULL);
    }
    
    char *arr = malloc(size * sizeof(char));
    
    if (arr == NULL)
    {
        return (NULL);
    }
    
    for (i = 0; i < size; i++)
    {
        arr[i] = c;
    }
    
    return (arr);
}
