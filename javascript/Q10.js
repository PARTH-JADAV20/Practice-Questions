var arr=[1,2,3,4,5];
var oddcount=0;
var evencount=0;

function odd(){
    for (i=0;i<arr.length;i++){
        if(arr[i]%2==0){
            evencount++
        }else{
            oddcount++
        }
    }
    console.log("Even:",evencount,"Odd:",oddcount)
}

odd()
