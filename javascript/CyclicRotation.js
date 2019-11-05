// CyclicRotation solution
function solution(A, K) {
    let retVal = [];
    for (let i = 0; i < A.length; i++) {
        retVal[(i + K) % A.length] = A[i];
    }
    return retVal;
}