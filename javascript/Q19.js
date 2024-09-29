var arr =[1, 2, 3, 4, 5];
var count=0;

for (i=0;i<arr.length;i++){
    if (arr[i]>arr[i+1]){
        count=count+1
    }
}

if(count==0){
    console.log("Array is Sorted in Ascending order")
}else {
    console.log("Array is not in Ascending order")
}