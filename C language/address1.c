/*	Create a union containing 6 strings: name, home_address, hostel_address, city, state and zip.
 Write a C program to display your present address.
 */
#include <stdio.h>
#include <string.h>

union Address
{
    char name[50];
    char home_address[100];
    char hostel_address[100];
    char city[50];
    char state[50];
    char zip[10];
};

int main()
{
    union Address addr;
    int choice;

    printf("Choose your present address type:\n");
    printf("1. Home Address\n");
    printf("2. Hostel Address\n");
    printf("3. City\n");
    printf("4. State\n");
    printf("5. Zip\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    printf("Enter the address: ");
    switch (choice)
    {
    case 1:
        scanf(" %[^\n]", addr.home_address);
        printf("Present Address: %s\n", addr.home_address);
        break;
    case 2:
        scanf(" %[^\n]", addr.hostel_address);
        printf("Present Address: %s\n", addr.hostel_address);
        break;
    case 3:
        scanf(" %[^\n]", addr.city);
        printf("Present Address: %s\n", addr.city);
        break;
    case 4:
        scanf(" %[^\n]", addr.state);
        printf("Present Address: %s\n", addr.state);
        break;
    case 5:
        scanf(" %[^\n]", addr.zip);
        printf("Present Address: %s\n", addr.zip);
        break;
    default:
        printf("Invalid choice\n");
    }

    return 0;
}