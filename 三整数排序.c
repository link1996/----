#include <stdio.h>
int main()
{
    int a, b, c, t;
    scanf("%d%d%d", &a, &b, &c);
    if(a > b){ t = a; a = b; b = t;} //a<=b
    if(a > c){ t = a; a = c; c = t;} //a<=b a<=c
    if(b > c){ t = b; b = c; c = t;} //
    printf("%d %d %d\n", a, b, c);
    return 0;
}
//ʱ��:20170526
//Ŀ��:����������
/*���:
1 3 2
1 2 3
*/
