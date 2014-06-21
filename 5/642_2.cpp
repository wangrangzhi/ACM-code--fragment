#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int word[2000][10], sorted[2000][10];
int n;

int cmp_char(const void* _a, const void* _b)
{
	char * a = (char*)_a;
	char * b = (char*)_b;
	return a-b;
}

int cmp_string(const void* _a, const void* _b)
{
	char * a = (char*)_a;
	char * b = (char*)_b;
	return strcmp(a, b);
}


int main()
{
	n = 0;
	for(;;)
	{
		scanf("%s", word[n]);
		if(word[n][0] == '*') break;
		n++;
	}

	qsort(word, n, strlen(word[0]),cmp_string);
	for (int i = 0; i < n; i++)
	{
		strcpy(sorted[i], word[i]);
		qsort(word[i], strlen(word[i]), sizeof(char), cmp_char);
	}

	char s[10];
	while(scanf("%s", s) == 1)
	{
		
			qsort(s, strlen(s), sizeof(char), cmp_char);
			int found = 0;
			for (int i = 0; i < n; ++i)
			{
				if(strcmp(s, sorted[i]) == 0)
				{
					printf("%s", word[i]);
					found = 1;
				}	
			}

			if(!found) printf(":(\n");
			printf("\n");
	}


	return 0;

}