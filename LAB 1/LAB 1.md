Aim
To implement and understand fundamental algorithms in C++, including:
Sorting algorithms (Selection Sort)
Searching algorithms (Linear Search)
Mathematical methods (Binary Exponentiation, Horner’s Rule)
Recursive problems (Tower of Hanoi, Permutations)
Logical generation (Truth Table)
Problem-solving (Missing Number, Velocity decay)

Algorithms (Pseudocode)
1. Selection Sort
for i = 0 to n-1
   min = i
   for j = i+1 to n-1
      if arr[j] < arr[min]
         min = j
   swap(arr[i], arr[min])
2. Linear Search
for i = 0 to n-1
   if arr[i] == key
      return i
return -1
3. Binary Exponentiation (x^n)
result = 1
while n > 0
   if n is odd
      result = result * x
   x = x * x
   n = n / 2
4. Horner’s Rule
result = a[n]
for i = n-1 to 0
   result = result * x + a[i]
5. Missing Number (Parity idea)
for i = 0 to n-2
   if parity(arr[i]) == parity(arr[i+1])
      missing = (arr[i] + arr[i+1]) / 2
6. Permutations (Backtracking)
function permute(str, l, r)
   if l == r
      print str
   else
      for i = l to r
         swap(str[l], str[i])
         permute(str, l+1, r)
         swap back
7. Tower of Hanoi
function hanoi(n, source, aux, dest)
   if n == 1
      move disk
   else
      hanoi(n-1, source, dest, aux)
      move disk
      hanoi(n-1, aux, source, dest)
8. Truth Table Generation
for each variable assign 0 and 1 recursively
print all combinations
9. Velocity Decay (Recursion)
function count(v)
   if v < 1 return 0
   return 1 + count(v * 0.555)

   | Algorithm             | Time Complexity | Space Complexity |
| --------------------- | --------------- | ---------------- |
| Selection Sort        | O(n²)           | O(1)             |
| Linear Search         | O(n)            | O(1)             |
| Binary Exponentiation | O(log n)        | O(1)             |
| Horner’s Rule         | O(n)            | O(1)             |
| Missing Number        | O(n)            | O(1)             |
| Permutations          | O(n!)           | O(n)             |
| Tower of Hanoi        | O(2ⁿ)           | O(n)             |
| Truth Table           | O(2ⁿ)           | O(n)             |
| Velocity Decay        | O(log v)        | O(log v)         |

Use Cases
1. Sorting
Organizing data (marks, records)
Preprocessing for searching

2.Searching
Finding elements in arrays
Database lookup

3.Mathematical Algorithms
Fast power calculation
Polynomial evaluation

4.Recursion Problems
Solving complex problems (divide & conquer)
Used in AI, backtracking

5.Logic / Truth Tables
Digital circuits
Boolean logic evaluation