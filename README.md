# practice-c

## Basic & Syntax

```c
int main() { 
	printf("Hello, World!\n");
	return 0;
}
```

## Variables and Data Types

### Variables :

**Variables** :  are used in a computer program to store a single piece of data. the content of a variable may be changed during the running of a program. when a variable is first defined, **the programming language allocates a small area of memory to store this data**

#### Variable naming conventions in C :

```c
// Camel Case:
int myVariable; 
float numberOfStudents;

// Snake Case:
int my_variable;
float number_of_students;

// Pascal Case:
typedef struct { 
	int FirstName;
	int LastName;
} Person;

// Hungarian Notation:
int iCount; // 'i' indicates an integer
char *szName; // 'sz' indicates a null-terminated string

// Abbreviations :
int numStudents;
float tempValue;

// Constants:
#define PI 3.14159265 
const int MAX_ELEMENTS = 100;

// Global Variables :
int g_globalVariable;

```

All variables use **data-type** during declaration to restrict the type of data to be stored. Therefore, we can say that data types are used to tell the variables the type of data they can store.

# Data Type :

**Data Type** : is a representation of data.
1. How much memory write is required to allocate and what type of data is allowed to store
2. we can say that data types are used to tell the variables the type of data it can store

- Primary
	- `int` `char` `float` `double` `void`
- Derived
	- `Function` `Array` `Pointer` `Reference` `String`
- User-Defined
	- `Structure` `Union` `Class` `Enum` `Typedef`
