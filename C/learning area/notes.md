**point makes a double**

e.g **4.0** is a double

3E8 or 6.62607E-34

- Integer variables (like floats) have a limited capacity.
- Additions performed by computers are not always commutative.

```C
int i,j;

i=1;
j=i++;

// j will receive the value of 1 and i the value of 2.

//j = j - (i + Var + Rem) is the same as j -= (i + Var + Rem)
```
- in the “C” language all strings are treated as arrays.

%d -> int
- ```==``` is a binary operator with left-side binding.
```C
scanf("%d", &value);
```
- *long* – is used to declare that we need a wider range of ints than the standard one;
- *short* – is used to determine that we need a narrower range of ints than the standard one;
- *unsigned* – is used to specify that a variable is needed only for non-negative numbers; 

In the following snippet, the variable x of type float is explicitly converted into the double type.

```C
float x;
double y;
y = (double) x;
```

- &  (ampersand)    bitwise conjunction
- |   (bar)                  bitwise disjunction
- ~   (tilde)                bitwise negation
- ^   (caret)               bitwise exclusive or

But take note: arguments of these operators **must be integers** (int as well as long, short or char); we must not use floats here.

The difference in the operation of the logical and bit operators is important: the logical operators do not penetrate into the bit level of its argument. They’re only interested in the final integer value.

- All the elements of an array have the same type.

```C
int numbers[5]
numbers[0] = 111
```
- any expression could be the index of an array

A pointer is a variable that contains the memory address of another
variable, called the pointee.

## Functions
- If the variable is declared outside of all the blocks, it becomes a **global** variable.
- every type in C is either an *object* type or a *function* type (Effective C)
- C has four types of scope: file, block, function prototype, and function.
- Objects have a storage duration that determines their lifetime. Altogether, four storage durations are available: automatic, static, thread, and allocated.
    - a sublist?
        - objects of automatic storage duration are declared within a block or as a function parameter. The lifetime of these objects begins when the block in which they’re declared begins execution, and ends when execution of the block ends. If the block is entered recursively, a new object is created each time, each with its own storage.
             - a sub sub sub list?
