var arr = [1,-2,3,-4,5,-6];
var neg=0;
var pos=0;

for (i=0;i<arr.length;i++){
    if (arr[i]<0){
        neg++
    }else{
        pos++
    }
}

console.log("Positive:",pos,"   Negative:",neg)