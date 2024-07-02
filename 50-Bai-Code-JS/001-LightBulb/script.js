const btn = document.getElementById("btn");
const lightbulb = document.getElementById("light-switch");

btn.addEventListener("click", () => {
    lightbulb.classList.toggle("active");
});
