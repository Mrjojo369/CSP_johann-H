document = notes.html
function hello(){
    document.getElementById("title").
    innerHTML = "hello world!"
}
function change(){
    document.getElementById("img").src = "https://utahhikingbeauty.com/wp-content/uploads/2020/07/Mount-Timpanogos-Aspen-Grove-Waterfall-Emerald-Lake-1.jpg"
}

function highlight(){
    document.getElementById("btn").style.backgroundColor ="orange"
     document.getElementById("btn").style.color ="white"
}
function normal(){
     document.getElementById("btn").style.backgroundColor ="gray"
     document.getElementById("btn").style.color ="black"
}
function show(){
    document.getElementById("hidden").style.display = "block"
}