var arr = [80, 30, 70, 50, 20];
var max=arr[0];
var min=arr[0];

for (i=0;i<arr.length;i++){
    if (arr[i]>max){
       max=arr[i]
    }
    if (arr[i]<min){
        min=arr[i]
    }
}

console.log(max-min)
