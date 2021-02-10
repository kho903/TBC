# vscode에서 c언어 쓰는 법
1. c언어 파일을 만든다.
```c
#include <stdio.h>

int main()
{
    printf("Hello!");
    return 0;
}
```

2. 터미널
- 임의로 a.exe로 컴파일 됨
```
> gcc main.c
> .\a.exe 
```
- 원하는 파일명으로 컴파일
```
> gcc main.c -o main.exe
> .\main.exe 
```

