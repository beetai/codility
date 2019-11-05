// BinaryGap solution
function solution(N) {
    // get binary representation
    let a = parseInt(N, 10).toString(2);
    let counter = 0;
    let maxsf = 0;
    for (i = 0; i < a.length; i++) {
        if (a[i] == "1") {
            if (counter > maxsf) maxsf = counter;
            counter = 0;
        } else {
            counter++;
        }
    }

    return maxsf;
}