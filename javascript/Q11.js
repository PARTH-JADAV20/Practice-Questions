var arr=[1, 2, 2, 3, 4, 4, 5]
var a= new Set()

for(i=0;i<arr.length;i++){
    a.add(arr[i]);
}

console.log([...a])