// OddOccurrencesInArray solution
function solution(A) {
    let unpaired = {};
    for (let i = 0; i < A.length; i++) {
        if (unpaired[A[i]]) {
            unpaired[A[i]] = false;
        } else {
            unpaired[A[i]] = true;
        }
        console.log(unpaired);
    }
    for (var i in unpaired) {
        if (unpaired[i]) {
           return parseInt(i);;
        }
    }
}
