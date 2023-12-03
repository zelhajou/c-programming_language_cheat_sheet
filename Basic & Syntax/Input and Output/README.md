# Input and Output

Input and output (I/O) operations are essential aspects of programming, allowing you to interact with users, read from or write to files, and communicate with external devices or networks.


- **Standard I/O Library:** C provides a standard I/O library, including functions like `printf` for output and `scanf` for input. These functions are commonly used for console I/O.
    
- **File I/O:** C supports file input and output operations through functions like `fopen`, `fclose`, `fread`, `fwrite`, `fgets`, and `fputs`. These functions allow you to read from and write to files.
    
- **Formatted I/O:** C provides powerful formatted I/O capabilities using functions like `printf` and `scanf`, which allow you to specify the format of data being read or written.
    
- **Error Handling:** C's I/O functions often return error codes or set the global variable `errno` in case of errors. You can check for errors using conditional statements.

```c
#include <stdio.h>

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    printf("You entered: %d\n", number);
    return 0;
}
```
