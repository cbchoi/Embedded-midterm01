#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <dirent.h>
#include <stdlib.h>
#include <stdio.h>

#ifndef _MAX_PATH
#define _MAX_PATH 255
#endif

#ifndef _MAX_BUFF
#define _MAX_BUFF 65535
#endif

/*** 
 Function Name: get_file_size
 Objective: 주어진 경로의 파일을 열어 파일의 크기를 반환함
 */
size_t get_file_size(char* file_path)
{
	/*








	*/
}

/*** 
 Function Name: read_file
 Objective: 주어진 index에서부터 buff_size만큼을 읽어들여 buff에 저장함
 */
void read_file(char* file_path, char* buff, int buf_size, int index)
{
	/*







    */
}

/*** 
 Function Name: copy_large_files
 Objective: read_file 함수를 사용하여 주어진 src_path의 파일을 dst_path로 제한된 buff_size만큼씩 복사함.
 */
void copy_large_files(char* src_path, char* dst_path, int buff_size)
{
	printf("SRC PATH: %s\n", src_path);
	printf("DST PATH: %s\n", dst_path);
	/*






























     */
}

int main()
{
	printf("\n%s\n", "Copy Large File");
	{
		copy_large_files("./large_file.bin", "./large_file2.bin", 80);
	}

	return 0;
}