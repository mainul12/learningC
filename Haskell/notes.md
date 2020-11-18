Haskell notes
- In Haskell, there are only expressions.
- expressions are really all there is, there are no statements.
- Haskell lists are immutable
Functions
```Haskell
hello name = "Hello, "++name

min 3 8 --returns 3

f = \x y -> x*y+x+y -- anonymous functions

(\x -> x+1) 4 --> returns 5

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
List comprehensions
```Haskell
[2*x | x <- [1..10]] --returns [2,4,6,8,10,12,14,16,18,20]

[[a,b] | a <- [10,11,12] , b <- [20,21]] --returns [[10,20],[10,21],[11,20],[11,21],[12,20],[12,21]]
```
Indexing lists
```Haskell
[5,3,8,7]  !! 2    -- > 8
```
```Haskell
23 : [48, 41, 44] --> [23,48,41,44]
```
