/* Create a Book structure containing book_id, title, author name and price. Write a C program to pass
 a structure as a function argument and print the book details.
 */
#include <stdio.h>

struct Book
{
    int book_id;
    char title[50];
    char author[50];
    float price;
};

void printBook(struct Book b)
{
    printf("\nBook Details:\n");
    printf("ID: %d\n", b.book_id);
    printf("Title: %s\n", b.title);
    printf("Author: %s\n", b.author);
    printf("Price: %.2f\n", b.price);
}

int main()
{
    struct Book b;

    printf("Enter book id: ");
    scanf("%d", &b.book_id);

    printf("Enter book title: ");
    scanf("%s", b.title);

    printf("Enter author name: ");
    scanf("%s", b.author);

    printf("Enter price: ");
    scanf("%f", &b.price);

    printBook(b);

    return 0;
}