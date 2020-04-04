#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
    //�ڲ��� str ��ָ����ַ�����ǰ n ���ֽ���������һ�γ����ַ� c��һ���޷����ַ�����λ��
    //void* memchr(const void* str, int c, size_t n)
    char str[] = "123 456 78900000000000000000000000";
    const char* pos = memchr(str, ' ', sizeof(str));
    printf("addr=%p|straddr=%p\n", pos,str);
    printf("%s\n",pos);

    //���ַ��� haystack �в��ҵ�һ�γ����ַ��� needle���������ս����ַ�����λ��
    //char *strstr(const char *haystack, const char *needle)
    pos = strchr(str, ' ');
    printf("addr=%p|straddr=%p\n", pos, str);
    printf("%s\n", pos);
    //�ڲ��� str ��ָ����ַ������������һ�γ����ַ� c��һ���޷����ַ�����λ��
    //char *strrchr(const char *str, int c)

    pos = strrchr(str, ' ');
    printf("addr=%p|straddr=%p\n", pos, str);
    printf("%s\n", pos);
    
    //�ֽ��ַ��� str Ϊһ���ַ�����delim Ϊ�ָ���
    //�ֽ��ַ���Ϊһ���ַ�����sΪҪ�ֽ���ַ�����delimΪ�ָ����ַ�����������ַ�����������ַ�����ÿ���ַ���Ϊ�ָ������
    //�״ε���ʱ��sָ��Ҫ�ֽ���ַ�����֮���ٴε���Ҫ��s���NULL��
    //char *strtok(char *str, const char *delim)
    //�ú������ر��ֽ�ĵ�һ�����ַ��������û�пɼ������ַ������򷵻�һ����ָ�롣
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

    //�����ַ��� str1 �е�һ�������ַ��� str2 �г��ֵ��ַ��±ꡣ
    //size_t strspn(const char* str1, const char* str2)
    int i = strspn(str, "123");
    printf("%d\n",i);
    
    //�����ַ��� str1 ��ͷ�����м����ַ��������ַ��� str2 �е��ַ���
    //size_t strcspn(const char* str1, const char* str2)
    i = strcspn(str, "24");
    printf("%d\n", i);

}
