#include <stdio.h>
int main()
{
    printf("%f\n", 0.0/0.0);//-1.#IND00
    printf("%f\n", 1.0/0.0);//1.#IND00
    //printf("%d\n", 1/0);//错误
    printf("%f\n", sqrt(-10));//1.#IND00
    printf("%d\n", 1111111111111*11111111111111);//

    return 0;
}
//时间:20170531
//目的:练习
/*结果:
-1.#IND00
1.#INF00
-1.#IND00
-1085118287
*/
