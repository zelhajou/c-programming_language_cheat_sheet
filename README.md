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
<code>+</code>
<code>-</code>
<code>++</code>
<code>--</code>
<code>!</code>
<code>&</code>
<code>*</code>
<code>~</code>
<code>sizeof</code>

<b>Binary:</b><br>
Arithmetic operators: <code>+</code>
<code>-</code>
<code>*</code>
<code>/</code>
<code>%</code>
<br>
Comparison Operators:
<code>==</code>
<code>!=</code>
<code><</code>
<code>></code>
<code><=</code>
<code>>=</code>
<br>
Logical operators:
<code>&&</code>
<code>||</code>
<code>!</code>
<br>
Assignment Operators:
<code>=</code>
<code>+=</code>
<code>-=</code>
<code>*=</code>
<code>/=</code>
<code>%=</code>
<br>
Bitwise Operators: 
<code>&</code>
<code>|</code>
<code>^</code>(XOR)
<code>~</code>(complement)
<code><<</code>(left shift)
<code>>></code>(right shift)
<br>
<b>Ternary:</b><br>
<code>? :</code>

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

<b>Formatted:</b> <br>
Input: <code>scanf()</code> <br>
Output: <code>printf()</code><br>
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

</td>
</tr>

<tr>
<td>Error Handlling</td>
<td></td>
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
<br>
<b>Memory Hierarchy:</b><br>
<i>Text Segment</i>, <i>Data Segment</i>, <i>Heap</i>, <i>Stack</i>, <i>Memory Mapping (MMap)</i>, <i>Environment Variables and Command Line Arguments</i>
<br>
<b>Dynamic Memory Allocation:<b><br>
/td>
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
