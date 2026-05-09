Aim
To find the K-th smallest element in an array using the Quick Select algorithm.
To find the minimum and maximum elements in an array using the Divide and Conquer approach.

Algorithms

1.minmax

function findMinMax(array, low, high):
    if low == high:
        return (array[low], array[low])

    if high == low + 1:
        if array[low] < array[high]:
            return (array[low], array[high])
        else:
            return (array[high], array[low])

    mid = (low + high) / 2

    left = findMinMax(array, low, mid)
    right = findMinMax(array, mid+1, high)

    min_val = minimum(left.min, right.min)
    max_val = maximum(left.max, right.max)

    return (min_val, max_val)

2.kth smallest element

function partition(array, low, high):
    pivot = array[high]
    i = low

    for j from low to high-1:
        if array[j] <= pivot:
            swap(array[i], array[j])
            i++

    swap(array[i], array[high])
    return i

function quickSelect(array, low, high, k):
    pivotIndex = partition(array, low, high)

    if pivotIndex == k:
        return array[pivotIndex]
    else if k < pivotIndex:
        return quickSelect(array, low, pivotIndex-1, k)
    else:
        return quickSelect(array, pivotIndex+1, high, k)


  Time Complexity

| Algorithm    | Technique        | Time Complexity | Space Complexity |
| ------------ | ---------------- | --------------- | ---------------- |
| Min-Max      | Divide & Conquer | O(n)            | O(log n)         |
| Quick Select | Partitioning     | O(n) avg        | O(1)             |

Use Cases

1.minmax
 Finding range (min/max) in datasets
 Used in optimization problems
 Efficient comparison reduction problems

2.kth smallest

Finding median or order statistics
Efficient selection problems
Used in large datasets where full sorting is unnecessary
Data analysis and ranking systems