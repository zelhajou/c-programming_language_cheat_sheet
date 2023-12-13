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
<td>Paradigm</td>
<td>Imperative (procedural), structured</td>
</tr>
<tr>
<td>Designed by</td>
<td>Dennis Ritchie</td>
</tr>
<tr>
<td>Developer</td>
<td>Dennis Ritchie & Bell Labs (creators)</td>
</tr>
<tr>
<td>Standardization</td>
<td>ANSI C, ISO C, C99, C11</td>
</tr>
<tr>
<td>First appeared</td>
<td>1972</td>
</tr>
<tr>
<td>Stable release</td>
<td>C18 / June 2018</td>
</tr>
<tr>
<td>Typing discipline</td>
<td>Static, weak, manifest, nominal</td>
</tr>
<tr>
<td>OS</td>
<td>Cross-platform</td>
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
<td>Compilation</td>
<td>Compiled language</td>
</tr>
<tr>
<td>Flow of Program</td>
<td> <i>Source Code</i> -> <i>Preprocessor</i> (e.g., #include) -> <i>Compiler</i> (e.g., gcc) -> <i>Linker (Combines Object Files)</i> -> <i>Executable Program</i> -> <i>Run the Program</i></td>
</tr>

<tr>
<td>Uses</td>
<td>
<ul>
  <li>Operating systems like LINUX, UNIX.</li>
  <li>CAD/ CAM Applications and Word processors.</li>
  <li>Embedded systems like ATMs, printers.</li>
  <li>RDBMS MySQL, Language Compilers and Interpreters, Print Spoolers, Loaders, Linkers, Assemblers, Text Editors, Automation tools, Network Drivers.</li>
</ul>
</td>
</tr>

<tr>
<td>Advantages</td>
<td>
<ul>
  <li>Relatively simple language</li>
  <li>Reliable (able to be trusted)</li>
  <li>Easy to understand and supports a rich set of data types</li>
  <li>Easy to use, write, modify, and debug, and quick to learn</li>
  <li>Can be compiled on a variety of computer platforms</li>
</ul>
</td>
</tr>

<tr>
<td>Key Features</td>
<td>
Simple, Machine Independent or Portable, Mid-level programming language, structured programming language, Rich Library, Memory Management, Fast Speed, Pointers, Recursion, Extensible, Robust, Highly portable
</td>
</tr>
<tr>
<td>Major implementations</td>
<td>K&R C, GCC, Clang, Intel C, C++Builder, Microsoft Visual C++, Watcom C</td>
</tr>
<tr>
<td>Dialects</td>
<td>Cyclone, Unified Parallel C, Split-C, Cilk, C*</td>
</tr>
<tr>
<td>Influenced by</td>
<td>B (BCPL, CPL), ALGOL 68, Assembly, PL/I, FORTRAN</td>
</tr>
<tr>
<td>Influenced</td>
<td>Numerous: AMPL, AWK, csh, C++, C--, C#, Objective-C, D, Go, Java, JavaScript, Julia, Limbo, LPC, Perl, PHP, Pike, Processing, Python, Ring, Rust, Seed7, Vala, Verilog (HDL), Nim</td>
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

```

</td>
</tr>

<tr>
<td>TOKEN</td>
<td>
<ul>
<li>Keywords</li>
<li>Strings</li>
<li>Operators</li>
<li>Constants</li>
<li>Identifiers</li>
<li>Special Characters</li>
</ul>
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
```

</td>
</tr>

<tr>

<td>Data Type</td>
<td>

<b>Primary</b>

```c
int, char, float, double, void,
signed int, unsigned int, short, long, long long, _Bool;
```
<b>Derived</b><br>

Function, Array, Pointer, String

<b>User-Defined</b>

```c
struct, union, enum, typedef;
```

</td>
</tr>

<tr>
<td>Characters Set:</td>
<td>
<b>Alphabets:</b> <i>Upper case</i>, <i>Lower case</i><br>
<b>Digits <i>[0−9]</i></b><br>
<b>Special characters:</b>
<code>~</code>,
<code>!</code>,
<code>#</code>,
<code>$</code>,
<code>%</code>,
<code>^</code>,
<code>&</code>,
<code>*</code>,
<code>(</code>,
<code>)</code>,
<code>_</code>,
<code>+</code>,
<code>|</code>,
<code>\</code>,
<code>`</code>,
<code>-</code>,
<code>=</code>,
<code>{</code>,
<code>}</code>,
<code>[</code>,
<code>]</code>,
<code>:</code>,
<code>"</code>,
<code>;</code>,
<code><</code>,
<code>></code>,
<code>?</code>,
<code>,</code>,
<code>.</code>,
<code>/</code><br>
<b>White spaces</b>:
<ul>
<li>Blank space</li>
<li>New line</li>
<li>Carriage return</li>
<li>Horizontal tab</li>
</ul>
<a href="https://simple.m.wikipedia.org/wiki/File:ASCII-Table.svg">ASCII Table</a>
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
<b>Loops:</b> <code>for</code> <code>while</code> <code>do-while</code> <code>Break</code> <code>Continue</code> <code>goto</code>
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
abs(x);			sqrt(x);	pow(x, y);	sin(x);
cos(x);			tan(x);		log(x);		ceil(x);
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

<a href="#">Character Classification Functions</a>

```c
isalnum();	isalpha();	isdigit();	islower();	isupper();	isspace();
ispunct();	isxdigit();	isprint();	isgraph();	iscntrl();	tolower();	toupper();
```



<a href=#>String Manipulation Functions</a>

```c
strlen();	strcpy();	strncpy();	strcat();	strncat();
strcmp();	strncmp();	strchr();	strrchr();	strstr();
strtok();	strspn();	strcspn();	memcpy();	memmove();
memset();	
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
<b>Formatted:</b>
<ul>
<li>Input: <code>scanf()</code>, <code>fscanf()</code></li>
<li>Output: <code>printf(), <code>fprintf()</code></code></li>
</ul>

<b>Unformatted:</b>
<ul>
<li>Input: <code>getchar()</code> <code>gets()</code></li>
<li>Output: <code>putchar()</code> <code>puts()</code></code></li>
</ul>

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
close(); // Closes an open file.
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
<i>NULL Pointers</i>,
<i>Void Pointers</i>,
<i>Function Pointers</i>,
<i>Array Pointers</i>,
<i>Double Pointe</i>
<br>
<a href="">Pointer Operations: </a>
<i>Declaration and Initialization</i>,
<i>Dereferencing</i>,
<i>Pointer Arithmetic</i>,
<i>Pointer Comparison</i>,
<i>Casting Pointer</i>
<br>
<a href="">Common Pointer Usages: </a>
<i>Dynamic Memory Allocation</i>,
<i>Passing by Reference</i>,
<i>Array Manipulation</i>,
<i>Data Structures (Linked Lists)</i>,
<i>Callback Functions</i>,
<i>Pointers to Functions</i>,
<i>File Handling (File Pointers)</i>,
<i>Pointer to Structures</i>,
<i>String Manipulation</i>
<br>
<a href="">Pointer Pitfalls:</a>
<i>Null Pointer Dereferencing</i>,
<i>Dangling Pointers</i>,
<i>Memory Leaks</i>,
<i>Uninitialized Pointers</i>,
<i>Pointer Arithmetic Error</i>
<br>
</td>
</tr>

<tr>
<td>File Management</td>
<td>

File Opening and Closing:

```c
fopen(); // Open a file.
fclose(); // Close a file.
```
Reading and Writing Data:

```c
fread(); // Read data from a file.
fwrite(); // Write data to a file.
```

File Positioning:

```c
fseek(); // Move the file pointer to a specified position.
ftell(); // Get the current position of the file pointer.
rewind(); // Move the file pointer to the beginning of the file.
```

Directory Operations:

```c
opendir(); // Open a directory stream for reading.
readdir(); // Read a directory entry.
closedir(); // Close a directory stream.
getcwd(); // Get the current working directory.
```

File and Directory Manipulation:

```c
mkdir(); // Create a new directory.
rmdir(); // Remove a directory.
chdir(); // Change the current working directory.
remove(); // Delete a file.
rename(); // Rename a file or directory.
link(); // Create a link to a file.
unlink(); // Remove a link to a file.
stat(); // Get file status.
```

File Permission Functions:

```c
chmod(); Change file permissions.
access(); Check file accessibility.
```

</td>
</tr>
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
<b><a>Memory Management</a>:<b><br>

```c
brk(); //Set the end of the data segment to the specified value.
mmap(); //Map files or devices into memory.
munmap(); //Unmap files or devices from memory.
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

// Information Maintenance
getpid(); // Get the process ID of the current process.
getppid(); // Get the parent process ID.
getuid(); // Get the user ID of the current process.
getgid(); // Get the group ID of the current process.
uname(); // Get system information including the operating system name, version, and more
```
</td>
</tr>


<tr>
<td>Signal Handling</td>
<td>

Standard Signals:

<ul>
<li>Termination Signals: <code>SIGABRT</code>, <code>SIGTERM</code></li>
<li>Interrupt Signals: <code>SIGINT</code>, <code>SIGQUIT</code></li>
<li>Fault Signals: SIGILL, <code>SIGFPE</code>, <code>SIGSEGV</code></li>
<li>Alarm Signals: <code>SIGALRM</code>, <code>SIGVTALRM</code></li>
<li>I/O Signals: <code>SIGPIPE</code>, <code>SIGPOLL</code></li>

<li>Miscellaneous Signals:
<code>SIGHUP</code>,
<code>SIGBUS</code>,
<code>SIGCHLD</code>,
<code>SIGCONT</code>,
<code>SIGSTOP</code>,
<code>SIGTSTP</code>,
<code>SIGTTIN</code>,
<code>SIGTTOU</code>,
<code>SIGUSR1</code>,
<code>SIGUSR2</code>,
<code>SIGPROF</code>,
<code>SIGSYS</code>,
<code>SIGTRAP</code>,
<code>SIGURG</code>,
<code>SIGXCPU</code>,
<code>SIGXFSZ</code>
</li>
</ul>

Real-time Signals:
<ul>
<li>Real-time Signals: <code>SIGRTMIN</code> to <code>SIGRTMAX</code></li>
</ul>

<b>Signal Functions:</b>

Signal Handling:
```c
signal(); // Establishes a signal handler for a specific signal.
sigaction(); // Examines and changes the action associated with a specific signal.
```

Signal Sending:

```c
raise(); // Sends a signal to the calling process.
kill(); // Sends a signal to a specified process or process group.
```

Signal Set Manipulation:

```c
sigemptyset(); // Initializes an empty signal set.
sigfillset(); // Initializes a signal set to contain all signals.
sigaddset(); // Adds a specified signal to a signal set.
sigdelset(); // Removes a specified signal from a signal set.
sigismember(); // Checks if a specified signal is a member of a signal set.
```

Signal Masking:

```c
sigprocmask(); // Examines and changes the calling process's signal mask.
```





```c
signal(): // Set a function to handle a signal.
sigaction(): // Examine and change signal action.
kill(): // Send a signal to a process or a group of processes.
alarm(): // Set an alarm clock for the process.
```

</td>
</tr>



<tr>
<td>Error Handlling</td>
<td>

```c
perror();
strerror();
```
</td>
</tr>

<tr>
<td>Development Environments</td>
<td>

<b>IDEs</b>: Visual Studio, Code::Blocks.<br>
<b>Text Editors</b>: Vim, Emacs.<br>
<b>Compilers</b>: GCC (GNU Compiler Collection), Clang.<br>
<b>Debuggers</b>: GDB (GNU Debugger).<br>
<b>Build Systems</b>: Make and CMake.<br>
<b>Version Control</b>: git<br>
<b>Libraries</b>: 
<ul>
<li>
Standard C Library:</b> <code>stdio.h</code>, <code>stdlib.h</code>...
</li>
<li>
rnal Libraries:</b> <code>OpenGL</code>, <code>SQLite</code>...</li>
</ul>
</td>

<b>Documentation</b>: Doxygen

</tr>



</table>
