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

### Data Type :

**Data Type** : is a representation of data.
1. How much memory write is required to allocate and what type of data is allowed to store
2. we can say that data types are used to tell the variables the type of data it can store

#### Classification of data :

- Primary
	- `int` `char` `float` `double` `void`
- Derived
	- `Function` `Array` `Pointer` `Reference` `String`
- User-Defined
	- `Structure` `Union` `Class` `Enum` `Typedef`

##### Primary Data Types (Primitive): `int` `char` `float` `double` `void`

```c
char myChar = 'A';
short myShort = 32767;
int myInteger = 42;
long myLong = 1234567890L;

float myFloat = 3.14; 
double myDouble = 2.71828;
long double myDoubleDouble = 2.718288788;

unsigned int myUnsignedInt = 100; 
unsigned char myUnsignedChar = 'B';
signed char mySignedChar = -127; 
_Bool myBool = 1;
```

##### Derived Data Types (Non primitive): `Function` `Array` `Pointer` `Reference` `String`

- Arrays
- Pointers
- Functions
- [String](https://github.com/zelhajou/practice-c/tree/main/Basic%20%26%20Syntax/Variables%20and%20Data%20Types/String)

##### User-Defined Types: `Structure` `Union` `Class` `Enum` `Typedef`

###### 1. **Structs (structures)**:

```c
// Structs allow you to group multiple variables of different data types into a single composite type.

struct Point { 
	int x;
	int y;
}; 

// Declare variables of the struct type struct Point p1, p2; 

// Initialize struct members 
p1.x = 10;
p1.y = 20;

p2.x = 5;
p2.y = 15;


typedef struct { 
	int x;
	int y;
} Point; 

// Now you can declare variables of type Point directly Point 
p1, p2;


```

###### 2. **Typedef**:

```c
// `typedef` is used to create custom names for existing data types, including structs and enums, which can enhance code clarity.


typedef unsigned int uint; // Create an alias for unsigned int 
typedef struct {
	int x;
	int y;
} Point; // Create an alias for the struct

uint age = 25;
Point origin;
```

## Constant Variables

Constants are used in computer programs to store a single piece of data that has a fixed value and cannot change during the program

```c
#define AGE 37
const data_type name = value;
```

## Type Casting/Conversion :

Casting means converting data from one data type to another.

```c
int x=7, y=5;
float z;
z = (float)x/(float)y;   /*Here the value of z is 1.4*/

/*

bool -> char -> short int -> int -> unsigned int -> long -> unsigned -> long long -> float -> double -> long double
 
*/
```

## Special Types:

```c

size_t arraySize = sizeof(int) * 10; // is an unsigned integral data type
ssize_t bytesRead = read(fileDescriptor, buffer, sizeof(buffer)); // is a signed data type

/*
On a 32-bit system, size_t is typically equivalent to an **unsigned long integer**, and on a 64-bit system, it is equivalent to an unsigned long integer.
*/

/*
So you should use **size_t whenever you mean to return a size in bytes, and ssize_t whenever you would return either a size in bytes or a (negative) error value**. ssize_t is not included in the standard and isn't portable.
*/

```
