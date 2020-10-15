# 문제 1번 제한된 크기의 버퍼를 사용하여 파일 복사 (15점)
다음 문제는 임베디드 시스템에서 제한된 크기의 버퍼를 사용하여 파일을 복사하는 것이다. 
임베디드 시스템에서는 제한된 자원에서 프로그램이 동작할 수 있어야 하며 저수준(low-level) API를 사용하여 프로그램을 작성할 수 있어야 한다. 
따라서, problem01.c 파일의 프로그램 틀을 확인하여 빈칸을 채워 프로그램이 정상적으로 동작하도록 구현하라. 

```C
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
		...
	*/
}

/*** 
 Function Name: read_file
 Objective: 주어진 index에서부터 buff_size만큼을 읽어들여 buff에 저장함
 */
void read_file(char* file_path, char* buff, int buf_size, int index)
{
	/*
		...
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
		...
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
```

## 참고사항
- 힌트로 모범답안을 제공함. 모범답안을 실행하기 위해서는 다음과 같이 명령어를 기입한다. 
```
>$ ./solution
```
- Compile Error: 0점
- Compile은 성공하였으나 Runtime Error 발생: 5점
- Compile은 성공하였고 Runtime Error가 발생하지 않으나 원하는 결과를 도출하지 않는 경우: 10점
- Compile 성공, 원하는 결과 도출: 15점