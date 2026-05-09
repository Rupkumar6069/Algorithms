Aim
To implement and understand important algorithms in C++ such as:
Searching (Linear, Binary)
Sorting (Bubble, Selection, Insertion)
Mathematical & logical problems (Power, Horner’s Rule, Missing Number, Truth Table)
Recursion (Tower of Hanoi, Permutations)

Algorithms (Pseudocode)
 
 1. Binary Search
 low = 0, high = n-1
while low <= high
   mid = (low + high)/2
   if arr[mid] == key → found
   else if key > arr[mid] → low = mid+1
   else high = mid-1

   2. Insertion Sort
   for i = 1 to n-1
   key = arr[i]
   j = i-1
   while j >= 0 and arr[j] > key
      shift arr[j]
   insert key at correct position

   3. Bubble Sort

   For j = 0 to n - i - 2:
   If arr[j] > arr[j + 1]:
   Swap arr[j] and arr[j + 1]

   Time and Space Complexity

| Algorithm      | Best Case | Average Case | Worst Case | Space Complexity |
| -------------- | --------- | ------------ | ---------- | ---------------- |
| Binary Search  | O(1)      | O(log n)     | O(log n)   | O(1)             |
| Insertion Sort | O(n)      | O(n²)        | O(n²)      | O(1)             |
| Bubble Sort    | O(n)      | O(n²)        | O(n²)      | O(1)             |

Use Cases
1.Binary Search
Efficient searching in sorted arrays
Used in databases, search engines
Suitable for large datasets

2.Insertion Sort
Small datasets
Nearly sorted arrays
Used in hybrid sorting algorithms

3.Bubble Sort
Educational purposes (easy to understand)
Small datasets
Detecting if a list is already sorted