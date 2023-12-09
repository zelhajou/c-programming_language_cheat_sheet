# C Programming Language

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
* Multi-line
* Comment.
*/

#include<stdio.h> // Include header files

int main() // main() function must be there
{
printf("Hello, World!\n"); // semicolon after each statement
return 0; /_ indicate that program ended successfuly _/
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
<ul>
<li>
+, -, *, /, % (modulo).
</li>
<li>
==, !=, <, >, <=, >=
</li>
<li>
&& (logical AND), || (logical OR), ! (logical NOT).
</li>
<li>
= (assignment), +=, -=, *=, /=, %=
</li>
<li>
&, |, ^ (XOR), ~ (complement), << (left shift), >> (right shift).
</li>
</ul>
</td>
</tr>






<tr>



<td><a href="https://github.com/zelhajou/c-programming-language/tree/main/Modularity%20and%20Organization/Functions">Fucntions</a></td>
<td>
<a href="https://github.com/zelhajou/c-programming-language/tree/main/Modularity%20and%20Organization/Functions/Math%20Functions">Math Fucntions:</a><br>
<code>abs(x)</code>
<code>sqrt(x)</code>
<code>pow(x, y)</code>
<code>sin(x), cos(x), tan(x)</code>
<code>log(x)</code>
<code>ceil(x)</code>
<code>floor(x)</code>
<code>round(x)</code>
<code>fmod(x, y)</code>
<code>fabs(x)</code>
<code>asin(x)</code>
<code>atan(x)</code>
<code>cosh(x)</code>
<code>sinh(x)</code>
<code>tanh(x)</code>
<code>exp(x)</code>
<code>log10(x)</code>
<code>cbrt(x)</code>
<code>hypot(x, y)</code>
<code>fmin(x, y)</code>
<code>fmax(x, y)</code>
<code>isnan(x)</code>
<code>isinf(x)</code><br>
<a href="">Data Conversion Functions:</a><br>
<code>atof()</code>
<code>atoi()</code>
<code>atol()</code>
<code>ecvt()</code>
<code>fcvt()</code>
<code>gcvt()</code>
<code>itoa()</code>
<code>ltoa()</code>
<code>strtod()</code>
<code>strtol()</code>
<code>strtoul()</code>
<code>ultoa()</code>
</td>
</tr>



<tr>
<td>
<a href="https://github.com/zelhajou/practice-c/tree/main/Basic%20%26%20Syntax/Control%20Flow">Control Flow</a>
</td>
<td>
<ul>
<li>
Conditional statements : <code>If-else</code> <code>Switch</code>
</li>
<li>
Loops : <code>for</code> <code>while</code> <code>do-while</code> <code>goto</code>
</li>
</ul>
</td>
</tr>

<tr>
<td>
<a href="https://github.com/zelhajou/practice-c/tree/main/Basic%20%26%20Syntax/Input%20and%20Output">
Input & Output
</a>
</td>
<td>
<ul>
<li>
Formatted: <br>
Input: <code>scanf()</code> <br>
Output: <code>printf()</code>
</li>
<li>
Unformatted: <br>
Input: <code>getchar()</code> <code>gets()</code> <br>
Output: <code>putchar()</code> <code>puts()</code>
</li>
</ul>
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

<tr>
<td>Preprocessor directives</td>
<td>
<code>#include</code>
<code>#define</code>
<code>#undef</code>
<code>#ifdef / #ifndef</code>
<code>#if / #elif / #else / #endif</code>
<code>#line</code>
<code>#error</code>
<code>#pragma</code>
</td>
</tr>
<tr>

</table>
