#include <stdio.h>
char*s = "#include <stdio.h>%cchar*s=%c%s%c;%cmain(){printf(10,s,34,s,34,10);getchar();}";
main() { printf(s, 10, 34, s, 34,10); getchar(); }
/*sΪ�ַ������׵�ַ �ַ�����%c��%c%s%c�Լ�����%c ���Ϊmain����printf����5����������������ﵽ�����Լ���Դ�������
һ��*/