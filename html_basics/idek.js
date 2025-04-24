document = idek.js

function more(){
    if(document.getElementById("extra").style.display != "flex")
        {document.getElementById("extra").style.display = "flex"
    document.getElementById("shw").innerHTML = "show less"

    }else{
        document.getElementById("extra").style.display = "none"
    document.getElementById("shw").innerHTML = "show more"
    }
}
function change(){
    document.getElementById("smtelse").src = "https://th.bing.com/th/id/OIP.fS1LX4MHJfOv6t2XVskgqgHaFj?w=204&h=180&c=7&r=0&o=5&pid=1.7"
}
