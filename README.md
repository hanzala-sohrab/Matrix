
# Matrix

Class based implementation of a matrix.


## Features

- Addition (+)
- Subtraction (-)
- Multiplication (*)
- Uses operator overloading, so you can just plug in the operators (+, -, *) and play


## Documentation

### Define matrices
```cpp
vector<vector<int>> mat1 = {{1, 2, 3}, 
                            {6, 5, 4}, 
                            {7, 8, 9}};

vector<vector<int>> mat2 = {{6, 5, 4}, 
                            {7, 8, 9}, 
                            {1, 2, 3}};

Matrix M1(mat1);
Matrix M2(mat2);
```

### Addition
```cpp
Matrix M3 = M1 + M2;
```
**Result**
```sh
7  7  7 
13 13 13 
8  10 12
```

### Subtraction
```cpp
Matrix M4 = M1 - M2;
```

**Result**
```sh
-5 -3 -1 
-1 -3 -5 
 6  6  6
```

### Multiplication
```cpp
Matrix M5 = M1 * M2;
```

*Note* : Matrix multiplication is an $O(n^3)$ operation.

### Print
```cpp
M5.print();
```
**Result**
```bash
23  27  31 
75  78  81 
107 117 127
```
