Haskell notes
- In Haskell, there are only expressions.
- expressions are really all there is, there are no statements.
- Haskell lists are immutable
Functions
```Haskell
hello name = "Hello, "++name

 f = \x y -> x*y+x+y -- anonymous functions
 
  map (\x -> x*2+1) [1..10]
```
