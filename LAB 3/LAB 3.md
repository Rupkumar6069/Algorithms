Aim

To implement and understand fundamental searching and sorting algorithms in C++, including:
Searching: Binary Search
Sorting: Bubble Sort, Insertion Sort, Quick Sort, Merge Sort

 Algorithms
 1. Binary Search

Set low = 0, high = n - 1
While low <= high:
 Compute mid = (low + high) / 2
 If arr[mid] == key, return mid
  If arr[mid] < key, set low = mid + 1
  Else set high = mid - 1
Return "Not Found"

 2. Insertion Sort

For i = 1 to n - 1:
 Set key = arr[i]
 Set j = i - 1
 While j >= 0 and arr[j] > key:
   Move arr[j] to arr[j + 1]
    Decrement j
 Place key at arr[j + 1]

  3. Bubble Sort

For i = 0 to n - 2:
  For j = 0 to n - i - 2:
    If arr[j] > arr[j + 1], swap them

 4. Quick Sort

If low < high:
  Partition the array and get pivot index p
  Recursively apply Quick Sort on:
    Left subarray: low to p - 1
    Right subarray: p + 1 to high

5. Merge Sort

If low < high:
  Find mid = (low + high) / 2
  Recursively sort:
    Left half (low to mid)
    Right half (mid + 1 to high)
 Merge the two sorted halves

 Time and Space Complexity

| Algorithm      | Best Case  | Average Case | Worst Case | Space Complexity |
| -------------- | ---------- | ------------ | ---------- | ---------------- |
| Binary Search  | O(1)       | O(log n)     | O(log n)   | O(1)             |
| Insertion Sort | O(n)       | O(n²)        | O(n²)      | O(1)             |
| Bubble Sort    | O(n)       | O(n²)        | O(n²)      | O(1)             |
| Quick Sort     | O(n log n) | O(n log n)   | O(n²)      | O(log n)         |
| Merge Sort     | O(n log n) | O(n log n)   | O(n log n) | O(n)             |

Use Cases
1.Binary Search
Fast searching in sorted data
Used in databases and search systems

2.Insertion Sort
Small datasets
Nearly sorted arrays
Used in hybrid algorithms

3.Bubble Sort
Learning and teaching purposes
Detect if list is already sorted

4.Quick Sort
Widely used in practice
Efficient for large datasets
Used in system libraries

5.Merge Sort
Stable sorting algorithm
Works well for large datasets
Used in external sorting (files, databases)