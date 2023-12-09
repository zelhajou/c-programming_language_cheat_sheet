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
<td>Memory Management</td>
<td>Manual (malloc, free)</td>
</tr>
<tr>
<td>Compilation</td>
<td>Compiled language</td>
</tr>
<tr>
<td>Flow of Program</td>
<td> <code>Source Code</code> -> <code>Preprocessor (e.g., #include)</code> -> <code>Compiler (e.g., gcc)</code> -> <code>Linker (Combines Object Files)</code> -> <code>Executable Program</code> -> <code>Run the Program</code></td>
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
<td>Keywords</td>
<td>
<code>auto</code>
<code>break</code>
<code>case</code>
<code>char</code>
<code>const</code>
<code>continue</code>
<code>default</code>
<code>do</code>
<code>double</code>
<code>else</code>
<code>enum</code>
<code>extern</code>
<code>float</code>
<code>for</code>
<code>goto</code>
<code>if</code>
<code>int</code>
<code>long</code>
<code>register</code>
<code>return</code>
<code>short</code>
<code>signed</code>
<code>sizeof</code>
<code>static</code>
<code>struct</code>
<code>switch</code>
<code>typedef</code>
<code>union</code>
<code>unsigned</code>
<code>void</code>
<code>volatile</code>
<code>while</code>
</td>
</tr>

<tr>
<td>
<a href="https://github.com/zelhajou/practice-c/tree/main/Basic%20%26%20Syntax/Operators">Operators</a>
</td>
<td>
Arithmetic operators: <code>+, -, *, /, % (modulo).</code><br>
Comparison Operators: <code>==, !=, <, >, <=, >=</code><br>
Logical operators: <code>&& (logical AND), || (logical OR), ! (logical NOT).</code><br>
Assignment Operators: <code>= (assignment), +=, -=, *=, /=, %=</code><br>
Bitwise Operators: <code>&, |, ^ (XOR), ~ (complement), << (left shift), >> (right shift).</code><br>
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
hypot(x, y);	fmin(x, y); fmax(x, y);	isnan(x);
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
<a href="https://github.com/zelhajou/practice-c/tree/main/Basic%20%26%20Syntax/Control%20Flow">Control Flow</a>
</td>
<td>
<b>Conditional statements:</b> <code>If-else</code> <code>Switch</code><br>
<b>Loops:</b> <code>for</code> <code>while</code> <code>do-while</code> <code>goto</code>
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
- Input: <code>scanf()</code> <br>
- Output: <code>printf()</code>

<b>Unformatted:</b> <br>
- Input: <code>getchar()</code> <code>gets()</code> <br>
- Output: <code>putchar()</code> <code>puts()</code>

</td>
</tr>

<tr>
<td>Error Handlling</td>
<td></td>
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
<code>#include</code><br>
<code>#define</code><br>
<code>#undef</code><br>
<code>#ifdef / #ifndef</code><br>
<code>#if / #elif / #else / #endif</code><br>
<code>#line</code><br>
<code>#error</code><br>
<code>#pragma</code><br>
</td>
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
