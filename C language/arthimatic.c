/* Perform pointer arithmetic (increment and decrement) on pointers of different data types.
 Observe how the memory addresses change and the effects on data access.
 */
#include <stdio.h>

int main()
{
    int a[3];
    float b[3];
    char c[3];
    int i;

    printf("Enter 3 integers:\n");
    for (i = 0; i < 3; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter 3 floats:\n");
    for (i = 0; i < 3; i++)
    {
        scanf("%f", &b[i]);
    }

    printf("Enter 3 characters:\n");
    for (i = 0; i < 3; i++)
    {
        scanf(" %c", &c[i]);
    }

    int *pInt = a;
    float *pFloat = b;
    char *pChar = c;

    printf("Walking through integers ");
    printf("We start at address %p seeing %d\n", pInt, *pInt);
    pInt++;
    printf("Step forward: now at %p seeing %d\n", pInt, *pInt);
    pInt--;
    printf("Step back: returned to %p seeing %d\n", pInt, *pInt);

    printf("Walking through floats ");
    printf("We start at address %p seeing %.2f\n", pFloat, *pFloat);
    pFloat++;
    printf("Step forward: now at %p seeing %.2f\n", pFloat, *pFloat);
    pFloat--;
    printf("Step back: returned to %p seeing %.2f\n", pFloat, *pFloat);

    printf("Walking through characters ");
    printf("We start at address %p seeing %c\n", pChar, *pChar);
    pChar++;
    printf("Step forward: now at %p seeing %c\n", pChar, *pChar);
    pChar--;
    printf("Step back: returned to %p seeing %c\n", pChar, *pChar);

    return 0;
}