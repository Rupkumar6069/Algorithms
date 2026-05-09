Aim
1.To find the smallest convex polygon (convex hull) that encloses a set of points.
2.To multiply two matrices faster than the traditional method using divide and conquer.
3.To maximize total value in a knapsack without exceeding its capacity.

algorithms

1.convex hull

function convexHull(points):
    sort points by x (then y)

    create empty hull

    // Lower hull
    for each point:
        while last two points + current make non-left turn:
            remove last point
        add current point

    // Upper hull
    repeat in reverse order

    remove duplicate last point
    return hull

2.knapsack

function knapsack(weights, values, W):
    create dp[n+1][W+1]

    for i from 0 to n:
        for w from 0 to W:
            if i == 0 or w == 0:
                dp[i][w] = 0
            else if weight[i-1] <= w:
                dp[i][w] = max(
                    value[i-1] + dp[i-1][w-weight[i-1]],
                    dp[i-1][w]
                )
            else:
                dp[i][w] = dp[i-1][w]

    return dp[n][W]

3.starseen's

function strassen(A, B):
    divide A and B into submatrices

    compute:
    M1 = (A11 + A22)(B11 + B22)
    M2 = (A21 + A22)(B11)
    M3 = (A11)(B12 - B22)
    M4 = (A22)(B21 - B11)
    M5 = (A11 + A12)(B22)
    M6 = (A21 - A11)(B11 + B12)
    M7 = (A12 - A22)(B21 + B22)

    combine results into final matrix C

    Time & space complexity

| Algorithm      | Technique           | Time Complexity | Space Complexity |
| -------------- | ------------------- | --------------- | ---------------- |
| Convex Hull    | Geometry + Sorting  | O(n log n)      | O(n)             |
| Strassen       | Divide & Conquer    | O(n^2.81)       | O(n²)            |
| Knapsack (0/1) | Dynamic Programming | O(nW)           | O(nW)            |

Use Cases

1.covex hull
  Computer graphics
  Collision detection
  GIS (Geographical systems)
  Shape analysis

2.knapsack
  Resource allocation
  Budget optimization
  Cargo loading problems
  Investment planning

3.starseen's
  Large matrix multiplication
  Scientific computing
  Image processing
  Machine learning
