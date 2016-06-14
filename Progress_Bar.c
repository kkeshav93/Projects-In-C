#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h>

int main()
    {
		int i , b, c;
		char x[100]; 
		char z[100];
		char y[100];
			for(i = 0 ; i < 100 ; i++)
			{
					for(b = 0; b < 1; b++)
					{
						printf ("\033c");
						strcpy(x, "=");
						strcat(z,x);
						//printf("\n\n\n");
						printf("\r%d%%|>%s",i,z);
						fflush(stdout);
						sleep(1);
						break;
					}
				//getchar();
				printf ("\033c");
				b = 0;
			}
		return 0;
    }
