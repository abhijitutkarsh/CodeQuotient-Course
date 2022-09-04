function changeParaText(event) {
	event.target.innerText = 'Yay! you added the event listener.'
}


// Start your code here ---->
var a = document.querySelector('p');
a.addEventListener('click', changeParaText);