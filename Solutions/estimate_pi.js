// Estimate pi, given that you have random (0,1)

function estimatePi(n){
    let numOfPoints_Circle = 0;
    let numOfPoints_Total = 0;

    for (i = 0; i < n; i++){
        let x = Math.random();
        let y = Math.random();

        let distance = Math.sqrt((x*x) + (y*y));

        if (distance <= 1){
            numOfPoints_Circle++;
        }
        numOfPoints_Total++
    }

    let estimate = 4 * (numOfPoints_Circle / numOfPoints_Total);

    return estimate
}


let estimatedPi = estimatePi(10000000);
console.log(estimatedPi);
