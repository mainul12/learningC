Haskell notes
- In Haskell, there are only expressions.
- expressions are really all there is, there are no statements.
- Haskell lists are immutable
Functions
```Haskell
hello name = "Hello, "++name

min 3 8 --returns 3

f = \x y -> x*y+x+y -- anonymous functions

map (\x -> x*2+1) [1..10]
```
```Haskell
roots a b c = 
        let
            det2 = b*b-4*a*c;
            det  = sqrt(det2);
            rootp = (-b + det)/a/2;
            rootm = (-b - det)/a/2;
        in
            [rootm,rootp]
```
Conditions in Haskell
```Haskell
max x y
    if x > y
        then x
        else y
max x y = if x>y then x else y
```
