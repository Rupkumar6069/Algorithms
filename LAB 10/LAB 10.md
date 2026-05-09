Aim
To determine the most efficient way to multiply a chain of matrices such that the total number of scalar multiplications is minimized.


algorithm

function matrixChain(p[], n):
    create table m[n][n]

    for i from 0 to n-1:
        m[i][i] = 0

    for chain length L from 2 to n:
        for i from 0 to n-L:
            j = i + L - 1
            m[i][j] = infinity

            for k from i to j-1:
                cost = m[i][k] + m[k+1][j] + p[i]*p[k+1]*p[j+1]

                if cost < m[i][j]:
                    m[i][j] = cost

    return m[0][n-1]

| Feature          | Value               |
| ---------------- | ------------------- |
| Technique        | Dynamic Programming |
| Time Complexity  | O(n³)               |
| Space Complexity | O(n²)               |


Use Cases
 Optimizing matrix operations in programs
 Compiler optimization (expression evaluation)
 Database query optimization
 Scientific computing
 Graphics transformations