#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <dirent.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define BUF_SIZE 80

void check_codex(char key, int* icodex, char* ccodex, int index)
{
	int i = 0;
	for(i = 0; i < strlen(ccodex); i++)
	{
		if(key == ccodex[i])
		{
			*(icodex + i) = index;
			break;
		}
	}
}

int get_index(char code)
{
	int index = 0;
	if(code >= 'a' && code <= 'z')
	{
		return code - 'a';
	}
	else if(code >= 'A' && code <= 'Z')
	{
		return code - 'A';
	}
	else if(code == '!')
	{
		return strlen("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ") + 1;
	}
	else
		return strlen("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ") + 2;
}

int main(int argc, char** argv)
{
	int fd, i; 	
	size_t sz_file;
	int index = 0;

	char  buff[BUF_SIZE+1];
	int*  code_array = (int*) malloc(sizeof(int) * strlen(argv[1]));
	printf("Input Keyword:%s\n", argv[1]);

	/*
	
		Blank

	*/

    char* ccodex = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ! ";
	int*  icodex = (int*) malloc(sizeof(int) * strlen(ccodex));
	memset(icodex, -1, strlen(ccodex));

	while (index < sz_file)
	{
		if(sz_file - index > BUF_SIZE)
		{
    		/*
	    		Blank
			*/
    		
			for(i = 0; i < BUF_SIZE; i++)
				check_codex(buff[i], icodex, ccodex, index+i);
			index += BUF_SIZE;
		}
		else
		{
			/*
	    		Blank
			*/
    		
    		
			for(i = 0; i < BUF_SIZE- index; i++)
				check_codex(buff[i], icodex, ccodex, index+i);
			index += (sz_file - index);
		}
	}
	/*
	    Blank
	*/
	for(i = 0; i < strlen(argv[1]);i++)
		code_array[i] = icodex[get_index(argv[1][i])];

	for(i = 0; i < strlen(argv[1]);i++)
		printf("%d,", code_array[i]);
	
	printf("\n");

	return 0;
}