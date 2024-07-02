const div1 = document.getElementById("div1");
const div2 = document.getElementById("div2");
const div3 = document.getElementById("div3");

var state = 0;
setInterval(function () {
    switch (state) {
        case 0:
            state = 1;
            div3.style.backgroundColor = "white";
            div1.style.backgroundColor = "red";
            break;
        case 1:
            state = 3;
            div1.style.backgroundColor = "white";
            div2.style.backgroundColor = "yellow";
            break;
        default:
            state = 0;
            div2.style.backgroundColor = "white";
            div3.style.backgroundColor = "green";
    }
}, 2000);