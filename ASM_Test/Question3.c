/*Define the following structures:
struct Date {
 int day;
 int month;
 int year;
};
struct Book {
 char title[100];
 char author[50];
 struct Date publishDate;
};
Write a program to:
a) (2 points) Input information for `n` books and print them.
b) (2 points – for high-performing students) Find and print the book with
the most recent publish date.
� Hint: Compare year → month → day to find the latest. */
#include<stdio.h>
#include<string.h>
struct date {
    int day;
    int month;
    int year;
};

struct Book {
    char title[100];
    char author[50];
    struct date publishdate;
    int day;
    int month;
    int year;
};

    int main(){


    struct Book std;
    printf("Enter title: \n");
    scanf("%s", std.title);
    printf("Enter name of author: \n");
    scanf("%s", std.author);
    printf("Enter number day: \n");
    scanf("%d", &std.day);
    printf("Enter number month: \n");
    scanf("%d", &std.month);
    printf("Enter number year: \n");
    scanf("%d", &std.year);

    printf("title %s - author %s - day %d - month %d - year %d\n",std.title,std.author,std.day,std.month,std.year);
    

    return 0;
}
    


