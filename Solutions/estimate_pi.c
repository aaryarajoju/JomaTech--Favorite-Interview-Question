// Estimate pi, given that you have random (0,1)

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float estimatePi(int n){
    int numOfPoints_Circle = 0;
    int numOfPoints_Total = 0;

    for (int i = 0; i < n; i++){
        float x = (float)rand()/RAND_MAX;
        float y = (float)rand()/RAND_MAX;

        float distance = sqrt((x * x) + (y * y));

        if (distance <= 1){
            numOfPoints_Circle++;
        }
        numOfPoints_Total++;
    }

    float estimate = (4 * ((float)numOfPoints_Circle / (float)numOfPoints_Total));
    return estimate;
}

int main(){
    float estimatedPi = estimatePi(10000000);
    printf("%f", estimatedPi);
}
