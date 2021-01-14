package main

import (
	"fmt"
	"math"
	"math/rand"
)

func main() {
	var estimatedPi float64 = estimatePi(10000000)
	fmt.Println(estimatedPi)
}

func estimatePi(n int) float64 {
	numOfPointsCircle := 0
	numOfPointsTotal := 0

	for i := 0; i < n; i++ {
		var x float64 = rand.Float64()
		var y float64 = rand.Float64()

		distance := math.Sqrt((x * x) + (y * y))

		if distance <= 1 {
			numOfPointsCircle++
		}
		numOfPointsTotal++
	}

	var estimate float64 = (4 * (float64(numOfPointsCircle) / float64(numOfPointsTotal)))

	return estimate
}
