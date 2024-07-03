#include<stdio.h>
int main()
{
    int x;//declaration
    x = 123; //initialization
    int y = 321;//declaration + initialization
    int age = 22;//integer
    float gpa = 8.34;//floating point number
    char grade = 'S';//single character
    char name[] = "Surya";//array of characters

    printf("Hello %s\n",name);
    printf("You are %d years old\n",age);
    printf("Your average grade is %c\n",grade);
    printf("Your gpa is %f\n",gpa);
    return 0;
}