const input_alert = document.getElementById("alert");
const input_confirm = document.getElementById("confirm");
const input_prompt = document.getElementById("prompt");
function funcAlert() {
    alert(input_alert.value)
}
function funcConfirm() {
    if (confirm("Chọn Ok hoặc Cancel")) {
        input_confirm.value = "Bạn chọn OK";
    } else {
        input_confirm.value = "Bạn chọn Cancel";
    }
}
function funcPrompt() {
    let result = prompt("Nhập đoạn text bất kỳ", "Bạn để trống");
    input_prompt.value = result;
}