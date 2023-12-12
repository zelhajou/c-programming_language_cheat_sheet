```bash
┌─┐  ┌─┐┬─┐┌─┐┌─┐┬─┐┌─┐┌┬┐┌┬┐┬┌┐┌┌─┐  ┬  ┌─┐┌┐┌┌─┐┬ ┬┌─┐┌─┐┌─┐
│    ├─┘├┬┘│ ││ ┬├┬┘├─┤│││││││││││ ┬  │  ├─┤││││ ┬│ │├─┤│ ┬├┤
└─┘  ┴  ┴└─└─┘└─┘┴└─┴ ┴┴ ┴┴ ┴┴┘└┘└─┘  ┴─┘┴ ┴┘└┘└─┘└─┘┴ ┴└─┘└─┘
```

<table>

<tr>
<td> <b>Category</b> </td>
<td> <b>Information</b> </td>
</tr>
<tr>
<td>Name</td>
<td>C Programming Language</td>
</tr>
<tr>
<td>Year</td>
<td>Developed in 1972 by Dennis Ritchie at Bell Labs</td>
</tr>
<tr>
<td>Paradigm</td>
<td>Procedural, Imperative, Structured</td>
</tr>
<tr>
<td>Typing</td>
<td>Static, Strong</td>
</tr>
<tr>
<td>Syntax Style</td>
<td>C-like</td>
</tr>
<tr>
<td>File Extension</td>
<td>.c (source code), .h (header files)</td>
</tr>
<tr>
<td>Standardization</td>
<td>ANSI C, ISO C, C99, C11</td>
</tr>
<tr>
<td>Key Features</td>
<td>Low-level manipulation, Efficient, Portability</td>
</tr>

<tr>
<td>Compilation</td>
<td>Compiled language</td>
</tr>
<tr>
<td>Flow of Program</td>
<td> <i>Source Code</i> -> <i>Preprocessor</i> (e.g., #include) -> <i>Compiler</i> (e.g., gcc) -> <i>Linker (Combines Object Files)</i> -> <i>Executable Program</i> -> <i>Run the Program</i></td>
</tr>

<tr>
<td>Hello World</td>
<td>
 
```c
/*
- Multi-line
- Comment.
*/

#include<stdio.h> // Include header files

int main() // main() function must be there
{
printf("Hello, World!\n"); // semicolon after each statement
return 0; // indicate that program ended successfuly
} // program enclosed by curly braces

````
</td>
</tr>

<tr>
<td>Keywords</td>
<td>

```c
auto;		break;		case;		char;	const;		continue
default;	do;		double;		else;	enum;		extern
float;		for;		goto;		if;	int;		long
register;	return;		short;		signed;	sizeof;		static
struct;		switch;		typedef;	union;	unsigned;	void;
volatile;	while
````

</td>
</tr>

<tr>
<td>
<a href="https://github.com/zelhajou/practice-c/tree/main/Basic%20%26%20Syntax/Operators">Operators</a>
</td>
<td>
<b>Unary:</b><br>
<code>+</code>,
<code>-</code>,
<code>++</code>,
<code>--</code>,
<code>!</code>,
<code>&</code>,
<code>*</code>,
<code>~</code>,
<code>sizeof</code>

<b>Binary:</b>
<ul>

<li>
Arithmetic operators:
<code>+</code>,
<code>-</code>,
<code>*</code>,
<code>/</code>,
<code>%</code>
</li>

<li>
Comparison Operators:
<code>==</code>,
<code>!=</code>,
<code><</code>,
<code>></code>,
<code><=</code>,
<code>>=</code>
</il>
<li>
Logical operators:
<code>&&</code>
<code>||</code>
<code>!</code>
</li>
<li>
Assignment Operators:
<code>=</code>,
<code>+=</code>,
<code>-=</code>,
<code>*=</code>,
<code>/=</code>,
<code>%=</code>
</li>
<li>
Bitwise Operators: 
<code>&</code>,
<code>|</code>,
<code>^</code>(XOR),
<code>~</code>(complement),
<code><<</code>(left shift),
<code>>></code>(right shift)
</li>
</ul>
<b>Ternary:</b><br>

condition <code>?</code> value_if_true <code>:</code> value_if_false



</td>
</tr>

<tr>
<td>
<a href="https://github.com/zelhajou/practice-c/tree/main/Basic%20%26%20Syntax/Control%20Flow">Control Flow</a>
</td>
<td>
<b>Conditional statements:</b> <code>If-else</code> <code>Switch</code><br>
<b>Loops:</b> <code>for</code> <code>while</code> <code>do-while</code> <code>goto</code>
</td>
</tr>

<tr>
<td>Header files</td>
<td>
<code>stdio.h</code>
<code>stdlib.h</code>
<code>string.h</code>
<code>math.h</code>
<code>time.h</code>
<code>ctype.h</code>
<code>stdarg.h</code>
<code>stddef.h</code>
<code>stdbool.h</code>
<code>limits.h</code>
<code>float.h</code>
<code>errno.h</code>
<code>assert.h</code>
<code>signal.h</code>
<code>ctype.h</code>
<code>locale.h</code>
<code>setjmp.h</code>
</td>
</tr>

<tr>
<td>Preprocessor directives</td>
<td>

```c
#include
#define
#undef
#ifdef / #ifndef
#if / #elif / #else / #endif
#line
#error
#pragma
```

</td>
</tr>

<tr>
<td><a href="https://github.com/zelhajou/c-programming-language/tree/main/Modularity%20and%20Organization/Functions">Fucntions</a></td>
<td>
<a href="https://github.com/zelhajou/c-programming-language/tree/main/Modularity%20and%20Organization/Functions/Math%20Functions">Math Fucntions:</a><br>

```c
abs(x);			sqrt(x);	pow(x, y);	sin(x),
cos(x),			tan(x);		log(x);		ceil(x);
floor(x);		round(x);	fmod(x, y);	fabs(x);
asin(x);		atan(x);	cosh(x);	sinh(x);
tanh(x);		exp(x);		log10(x);	cbrt(x);
hypot(x, y);		fmin(x, y);	fmax(x, y);	isnan(x);
isinf(x);
```
<a href="">Data Conversion Functions:</a><br>

```c
atof();		atoi();		atol();		ecvt();
fcvt();		gcvt(); 	itoa();		ltoa();
strtod();	strtol();	strtoul();	ultoa();
```
</td>
</tr>

<tr>
<td>
<a href="https://github.com/zelhajou/practice-c/tree/main/Basic%20%26%20Syntax/Input%20and%20Output">
Input & Output
</a>
</td>
<td>
<h4>Standard I/O (stdio.h)</h4>
<b>Formatted:</b> <br>
Input: <code>scanf()</code>, <code>fscanf()</code><br>
Output: <code>printf(), <code>fprintf()</code></code><br>
<b>Unformatted:</b><br>
Input: <code>getchar()</code> <code>gets()</code> <br>
Output: <code>putchar()</code> <code>puts()</code>
<br>
<b>Escape Sequences:</b>
<code>\n</code> 
<code>\t</code> 
<code>\r</code> 
<code>\\</code> 
<code>\'</code> 
<code>\"</code> 
<code>\?</code> 
<code>\a</code> 
<code>\b</code> 
<code>\f</code> 
<code>\v</code> 
<code>\0</code>
<br>
<b>Format Specifiers:</b>
<code>%d</code>
<code>%ld</code>
<code>%lld</code>
<code>%u</code>
<code>%lu</code>
<code>%llu</code>
<code>%f</code>
<code>%lf</code>
<code>%e, %E</code>
<code>%c</code>
<code>%s</code>
<code>%p</code>
<code>%x, %X</code>
<code>%o</code>
<code>%g, %G</code>
<code>%%</code>

<h4>File Descriptors</h4>
<ul>
<li>stdin (0)</li>
<li>stdout (1)</li>
<li>stderr (2)</li>
</ul>

<h4>Low-level I/O</h4>

```c
open(); // Opens a file and returns a file descriptor.
read(); // Reads data from an open file into a buffer.
writ(); // Writes data from a buffer to an open file.
clos(); // Closes an open file.
lseek(); // Moves the file pointer associated with an open file.
unlink(); // Removes a file from the file system.
```

<h4>Buffered I/O</h4>

```c
fopen(); //Opens a file for reading or writing
fclose(); // Closes the specified file stream
fflush(); // Flushes the output buffer of a stream
setvbuf(); // Sets the buffering mode and size for the specified stream
fprintf(); // Writes formatted data to the specified stream
fscanf();	// Reads formatted data from the specified stream
fread(); // Reads data from a stream into the specified buffer
fwrite(); // Writes data from the specified buffer to a stream
```

</td>
</tr>



<tr>
<td><a href="https://github.com/zelhajou/c-programming-language/tree/main/Pointers">Pointers<a></td>
<td>
<a href="">Types of Pointers: </a>
<ul>
<li>NULL Pointers</li>
<li>Void Pointers</li>
<li>Function Pointers</li>
<li>Array Pointers</li>
<li>Double Pointe</li>
</ul>
<br>
<a href="">Pointer Operations: </a>
<ul>
<li>Declaration and Initialization</li>
<li>Dereferencing</li>
<li>Pointer Arithmetic</li>
<li>Pointer Comparison</li>
<li>Casting Pointer<l/i>
</ul>
<br>
<a href="">Common Pointer Usages: </a>
<ul>
<li>Dynamic Memory Allocation</li>
<li>Passing by Reference</li>
<li>Array Manipulation</li>
<li>Data Structures (Linked Lists)</li>
<li>Callback Functions</li>
<li>Pointers to Functions</li>
<li>File Handling (File Pointers)</li>
<li>Pointer to Structures</li>
<li>String Manipulation</li>
</ul>
<br>
<a href="">Pointer Pitfalls:</a>
<li>Null Pointer Dereferencing</li>
<li>Dangling Pointers</li>
<li>Memory Leaks</li>
<li>Uninitialized Pointers</li>
<li>Pointer Arithmetic Error</li>
<br>
</td>
</tr>



<tr>
<td>File Management</td>
<td>

```c
open(); // Opens a file or creates a new file
close(); // Closes a file descriptor
read(); // Reads data from a file
write(); // Writes data to a file
lseek(); // Moves the file pointer within a file
unlink(); // Removes a file from the file system
rename(); // Renames a file
chmod(); // Changes the permissions of a file
stat(); // Returns information about a file
mkdir(); // Creates a new directory
rmdir(); // Removes an empty directory
```
</td>
</tr>


<tr>
<td>Memory Management</td>
<td>
<b>Memory Allocation:</b><br>
<ul>
<li>
<b>Static Allocation:</b> Memory is allocated at compile-time
</li>
<li>
<b>Dynamic Allocation:</b> Memory is allocated at runtime
</li>
</ul>
<b>Memory Layout:</b><br>
<i>Text Segment</i>, <i>Data Segment</i>, <i>Heap</i>, <i>Stack</i>, <i>Memory Mapping (MMap)</i>, <i>Environment Variables and Command Line Arguments</i>
<br>
<b><a>Dynamic Memory Allocation</a>:<b><br>

```c
malloc();	// Allocate memory dynamically
calloc();	// Allocate contiguous block of memory and initializes it to zero
realloc();	// Reallocate memory dynamically

// Memory Leaks Tool: Valgrind
```
<b><a>Memory Deallocation</a>:</b>

```c
free(); // Deallocate memory
```

</td>
</tr>

<tr>
<td>Process management</td>
<td>
<b>Process States</b>
<ul>
<li>Running</li>
<li>Ready</li>
<li>Blocked (or Waiting)</li>
<li>Terminated</li>
</ul>

<b>Process Control Block (PCB)</b>
<ul>
<li>Process ID (PID)</li>
<li>Program counter and CPU registers</li>
<li>Memory allocation details</li>
<li>Process state</li>
<li>Priority and scheduling information</li>
<li>Open file descriptors</li>
<li>Parent and child process information</li>
</ul>

<b>Process control<b>

```c
fork(); // Create a new process by duplicating the existing process.
exec(); // Replace the current process with a new one.
wait(); // Wait for a child process to terminate.
exit(); // Terminate the current process.
getpid(); // Get the process ID of the current process.
getppid(); // Get the parent process ID.
```
</td>
</tr>
<tr>


<tr>
<td>Error Handlling</td>
<td></td>
</tr>

<tr>
<td>Build and Automation Tools</td>
<td>
Makefile
</td>
</tr>
<tr>

<tr>
<td>Libraries and frameworks</td>
<td>
<b>Standard C Library:</b> <code>stdio.h</code>, <code>stdlib.h</code>, and <code>string.h</code>...<br>
<b>External Libraries:</b> <code>OpenGL</code>, <code>SQLite</code>...
</td>
</tr>

</table>
