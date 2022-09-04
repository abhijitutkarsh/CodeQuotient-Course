function changeBackgroundToRed(){
    var a = document.getElementById('my-div');
    console.log(a);
    a.style.backgroundColor = "red";

}

// var b = document.getElementById("my-div");
document.querySelector('#my-div').onclick = function (event){
    changeBackgroundToRed();
    
}