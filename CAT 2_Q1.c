#include<stdio.h>

#include <string.h> // For strcpy

int main () {

// Define the structure named employee

   struct employee {

   char name [25];

   int id;

   char department[20];

   float salary;

   char email [50];
];
// Declare a variable of the employee structure type
   struct employee;

// Initialize the employee structure with the correct values
strcpy(employee name, "John Doe");

employee id = 12345;

strcpy(employee department,"Human Resources");

employee salary= 55000.50;

strcpy(employee email,"John.doe@company.com");

//print the employee details in the correct format

printf("Employee Details:\n");

printf("Name:%s\n",employee name);

printf("ID:%d\n",employee ID);

printf("Department:%s\n",employee department);

printf("Salary:%.2f\n",employee salary);

printf("Email:%s\n",employee email);


return0;

}