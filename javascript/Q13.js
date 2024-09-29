var arr=[1, 2, 3, 4, 5] 
var num=5;
var count=0;

for (i=0;i<arr.length;i++){
    if(arr[i]==num){
        count++
    }
}
if(count>0){
    console.log("true")
}else {
    console.log("false")
}