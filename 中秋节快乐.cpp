#include <stdio.h>
#include <windows.h>   // Windows延时用这个头文件
int main() {
    char moon[] = "●";
    char msg[] = "中秋快乐！愿你月圆人团圆，事顺梦成真！";
    printf("正在升起中秋明月…\n");
    for (int i = 0; i < 5; i++) {
        printf("%s", moon);
        fflush(stdout);
        Sleep(1000);   // 延时1秒
    }
    printf("\n%s\n", msg);
    return 0;
}
