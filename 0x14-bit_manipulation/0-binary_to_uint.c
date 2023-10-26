
#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - binary can be converted through unsigned int
 * @b: A string that takes binary number or numbers
 * Return: A numbers that are converted
 */

unsigned int binary_to_uint(const char *b)
{
        int alx;
        unsigned int sala = 0;

        if (!b)
                return (0);
        for (alx = 0; b[alx]; alx++)
        {
                if (b[alx] < '0' || b[alx] > '1')
                        return (0);
                sala  = 2 * sala + (b[alx] - '0');
        }
        return (sala);
}

