#include <stdio.h>
int main(void)
{
    int x, y;
    x = 10;
    y = 5; /* wiersz 7 */
    y = x + y; /* wiersz 8 */
    x = x*y; /* wiersz 9 */

    printf("%d %d\n", x, y);

    return 0;
}