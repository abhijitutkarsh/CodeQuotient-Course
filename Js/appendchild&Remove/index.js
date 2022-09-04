function addDivWithSpans(){
    var e = document.createElement('div')
    e.setAttribute('id','my-div');
     

     var h = document.createElement('span');

     h.innerText = "hello"
     
     e.appendChild(h);

     var h = document.createElement('span');

     h.innerText = "hello"
     
     e.appendChild(h);

     var h = document.createElement('span');

     h.innerText = "hello"
     
     e.appendChild(h);
     
    document.body.appendChild(e);
    console.log(e)

}
function removeParagraphs(){
    var list = document.getElementsByTagName("p"),i;
    for(i = list.length-1 ; i>=0 ; i--)
        document.body.removeChild(list[i]);
console.log(list)

  }
  removeParagraphs();