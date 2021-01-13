# Estimate pi, given that you have random (0,1)

import random
import math

def estimatePi(n: int):

  numOfPoints_Circle: int = 0
  numOfPoints_Total: int = 0

  for _ in range(n):
    x: float = random.uniform(0,1)
    y: float = random.uniform(0,1)
    
    distance: float = math.sqrt(x**2 + y**2)
    
    if distance <= 1:
      numOfPoints_Circle += 1
      
    numOfPoints_Total += 1
    
  estimate: float = 4 * (numOfPoints_Circle / numOfPoints_Total)
    
  return estimate
  
# main
estimatedPi: float = estimatePi(10000000)
print(estimatedPi)
