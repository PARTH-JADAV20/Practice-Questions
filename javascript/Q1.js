var Score=79;

function grade(){
    if (Score>=90 && Score<=100){
        console.log("A")
    }else if (Score>=80 && Score<=89){
        console.log("B")
    }else if (Score>=70 && Score<=79){
        console.log("C")
    }else if (Score>=60 && Score<=69){
        console.log("D")
    }else {
        console.log("E")
    }
}

grade()