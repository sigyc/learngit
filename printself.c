#include <stdio.h>
char*s = "#include <stdio.h>%cchar*s=%c%s%c;%cmain(){printf(10,s,34,s,34,10);getchar();}";
main() { printf(s, 10, 34, s, 34,10); getchar(); }
/*s为字符串的首地址 字符串中%c和%c%s%c以及最后的%c 会成为main里面printf后面5个数的输出参数，达到换行以及和源程序代码
一致*/