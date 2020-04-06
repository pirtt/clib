#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
    //在参数 str 所指向的字符串的前 n 个字节中搜索第一次出现字符 c（一个无符号字符）的位置
    //void* memchr(const void* str, int c, size_t n)
    char str[] = "123 456 78900000000000000000000000";
    const char* pos = memchr(str, ' ', sizeof(str));
    printf("addr=%p|straddr=%p\n", pos,str);
    printf("%s\n",pos);

    //在字符串 haystack 中查找第一次出现字符串 needle（不包含空结束字符）的位置
    //char *strstr(const char *haystack, const char *needle)
    pos = strchr(str, ' ');
    printf("addr=%p|straddr=%p\n", pos, str);
    printf("%s\n", pos);
    //在参数 str 所指向的字符串中搜索最后一次出现字符 c（一个无符号字符）的位置
    //char *strrchr(const char *str, int c)

    pos = strrchr(str, ' ');
    printf("addr=%p|straddr=%p\n", pos, str);
    printf("%s\n", pos);
    
    //分解字符串 str 为一组字符串，delim 为分隔符
    //分解字符串为一组字符串。s为要分解的字符串，delim为分隔符字符（如果传入字符串，则传入的字符串中每个字符均为分割符）。
    //首次调用时，s指向要分解的字符串，之后再次调用要把s设成NULL。
    //char *strtok(char *str, const char *delim)
    //该函数返回被分解的第一个子字符串，如果没有可检索的字符串，则返回一个空指针。
    char* pp = strtok(str, " ");
    printf("addr=%p|straddr=%p\n", pp, str);
    printf("ret=%s|src=%s\n", pp,str);
    pp = strtok(NULL, " ");
    printf("addr=%p|straddr=%p\n", pp, str);
    printf("ret=%s|src=%s\n", pp, str);
    
    int len = strxfrm(str, "123456\000789", 20);
    printf("len=%d,str=%s\n", len, str);

    strncpy(str, "123456\000789", 20);
    printf("len=%d,str=%s\n", len, str);

    //检索字符串 str1 中第一个不在字符串 str2 中出现的字符下标。
    //size_t strspn(const char* str1, const char* str2)
    int i = strspn(str, "123");
    printf("%d\n",i);
    
    //检索字符串 str1 开头连续有几个字符都不含字符串 str2 中的字符。
    //size_t strcspn(const char* str1, const char* str2)
    i = strcspn(str, "24");
    printf("%d\n", i);

}
