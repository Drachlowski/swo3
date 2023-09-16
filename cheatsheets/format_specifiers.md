# 1. Format Specifiers for printf and scanf

| Format Specifiers | Type of Output |
| ----------------- | -------------- |
| %d or %i | A decimal integer or signed integer |
| %c | Signed character |
| %f | Signed float |
| %e | A floating-point number |
| %s | A string or sequence of character |
| %lf | double |
| %Lf | Long double |
| %o | Octal integer |
| %u | Short unsigned integer |
| %ld | Long decimal integer |
| %x | Hexadecimal integer |
| %p | Print memory address in the hexadecimal form |


# 2. Examples

## 2.1 %d (Decimal Integer)

```
#include <stdio.h>

int main() {
    int i = 50;
    printf("i = %d \n", i);

    return 0;
}
```

```
Output: i = 50
```


## 2.2 %c (Character)

```
#include <stdio.h>

int main() {
    char s;
    printf("Enter the character \n");
    scanf("%c",&s);
    printf("c = %c", s);

    return 0;
}
```

```
Output: Enter the character
Input : A
Output: c = A
```


## 2.3 %f (Floating Point)

```
#include <stdio.h>

int main() {
    float f = 3;
    printf("f = %f \n", f);

    return 0;
}
```

```
Output: f = 3.000000
```


## 2.4 %e (Floating Pointer Number)

```
#include <stdio.h>

int main() {
    float f = 12.5;
    printf("f = %e \n", f);

    return 0;
}
```

```
Output: f = 1.250000e+1
```


## 2.5 %s (String)

```
#include <stdio.h>

int main() {
    char s[15]="hello world";
    printf("s = %s \n", s);

    return 0;
}
```

```
Output: s = hello world
```


## 2.6 %lf (Double)

```
#include <stdio.h>

int main() {
    double d = 12.5;
    printf("d = %lf \n", d);

    return 0;
}
```

```
Output: d = 12.500000
```


## 2.7 %o (octal integer)

```
#include <stdio.h>

int main() {
    int i = 11;

    // Display integer value of 11 as octal value
    printf("oct = %o \n", i);

    return 0;
}
```

```
Output: oct = 13
```


## 2.8 %x (Hexadecimal Integer)

```
#include <stdio.h>

int main() {
    int i = 14;

    // Display integer value of 14 as hex value
    printf("h = %x \n", i);

    return 0;
}
```

```
Output: h = e
```


## 2.9 %p (Prints Memory Address) Format Specifier

To find the memory address that holds values of a variable, we use the %p format specifier, and it prints in hexadecimal form.

```
#include <stdio.h>

int main() {
    int i =0;
    printf("mem = %p \n", &i);

    return 0;
}
```

```
Output: mem = 0x7ffcc14472d4
```