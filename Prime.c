#include <stdio.h>
int main()
{

    int n, count = 0;

    printf("Enter the Number:");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {

        if (n % i == 0)
        {
            count = count + 1;
        }
    }
    if (count == 2)
    {
        printf("The Number Is %d Prime", n);
    }

    else {
        printf("The Number Is %d Not prime",n);
        }

return 0;
}