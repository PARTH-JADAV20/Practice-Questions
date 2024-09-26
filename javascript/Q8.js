var array=[1,2,3,4,5];

function avg(){
    var sum=0;
    var len=array.length;
    for (i=0;i<array.length;i++){
        sum=sum+array[i];
    }
    console.log("Average of array is :",sum/len)
}

avg()
