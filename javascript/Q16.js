var arr = [3,5,9,1,7]
var count=0;

for (i=0;i<arr.length;i++){
    if (arr[i]<0){
        count++
    }
}
console.log("Are all numbers in array are Positive")
if(count==0){
    console.log("true")
}else {
    console.log("false")
}