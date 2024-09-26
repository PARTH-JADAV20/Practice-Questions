var array=[4,2,8,5,1];
var temp;

function asc(){
    for (i=0;i<array.length;i++){
        for(j=0;j<array.length;j++){
            if (array[j]>array[j+1]){
                temp=array[j+1]
                array[j+1]=array[j]
                array[j]=temp
            }
        }
    }
    console.log(array)
}

asc()
