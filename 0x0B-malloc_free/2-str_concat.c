lude "main.h"
# include <stdlib.h>
/**
 * str_concat - concatenates 2 strings
 * @s1: first string
 * @s2: second string
 * Return: pointer - to newly-allocated space in memory
 *                   containing the 2 concatenated strings
 *         or NULL - if concatenation fails
 */
char *str_concat(char *s1, char *s2)
{
int i, j = 0, len = 0;
char *conc;

if (s1 == NULL)
s1 = "";

if (s2 == NULL)
s2 = "";

for (i = 0; s1[i] || s2[i]; i++)
len++;

conc = malloc(sizeof(char) * len);

if (conc == NULL)
return (NULL);

for (i = 0; s1[i]; i++)
conc[j++] = s1[i];

for (i = 0; s2[i]; i++)
conc[j++] = s2[i];

return (conc);
}
