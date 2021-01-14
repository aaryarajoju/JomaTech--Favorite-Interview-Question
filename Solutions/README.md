# Solution

## Monte Carlo estimation

According to GeeksforGeeks, `Monte Carlo methods are a broad class of computational algorithms that rely on repeated random sampling to obtain numerical results.`

---

## Estimating the value of Pi

<!--brief intro here-->

### Algorithm

1. Initialize `numberOfPointsInsideCircle` and `totalNumberOfPoints` to zero
2. For `n` times, execute steps 3 to 6
3. Generate random values (uniformly, between 0 and 1), for both `x` and `y`
4. Calculate the value of `distance` for the points from the origin, using `distance = sqrt((x*x) + (y*y))`
5. If `distance` is less than or equal to 1, increment `numberOfPointsInsideCircle`
6. Increment `totalNumberOfPoints`
7. Calculate the estimation of Pi using `pi = 4 (numberOfPointsInsideCircle / totalNumberOfPoints)`
8. Print the estimated value of pi

### Explanation

<!--explanation here-->

---

## References

- [Joma's video](https://www.youtube.com/watch?v=pvimAM_SLic)
- [GeeksforGeeks Article](https://www.geeksforgeeks.org/estimating-value-pi-using-monte-carlo/)

---
