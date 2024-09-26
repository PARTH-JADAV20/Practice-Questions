var s1=10;
var s2=15;
var s3=12;

function trai(){
    if (s1==s2 && s2==s3){
        console.log("Equilteral")
    }else if (s1==s2 || s2==s3){
        console.log("Isosceles")
    }else{
        console.log("Scalene")
    }
}

trai()