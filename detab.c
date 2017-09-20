/*Keenan Icarangal
CPE 357-01
detab.c
*/

#include <stdio.h>

int main(void)
{
	char C;
	int i = 0;

	while ((C = getchar()) != EOF)
	{
		if (C != '\b' && C != '\t')
		{
			putchar(C);
		}

		if (C == '\t') /*check if tab pressed*/
		{
			if (i % 8 != 0) /*if not at tab break*/
			{
				int j = 8 - (i % 8);
				i = i + 8 - (i % 8);
				while (j > 0)
				{
					putchar(' ');
					j--;
				}
				/*j = 0;*/
			}
			else /*if at tab break*/
			{
				int j = 8;
				i = i + 8;
				while (j > 0)
				{
					putchar(' ');
					j--;
				}
				/*j = 0;*/
			}
		}

		if (C == '\b' && i != 0) /*check if backspace pressed*/
		{
			i--;
		}

		if (C == '\n') /*check if newline pressed*/
		{
			i = 0;
		}
		else
		{
			i++;
		}
	}
	return 0;
}