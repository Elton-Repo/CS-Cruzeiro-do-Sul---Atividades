
function verificar() {

    let nota = parseFloat(document.getElementById("nota").value);
    let resultado = document.getElementById("resultado");

    if (isNaN(nota) || nota < 0 || nota > 10) {

        resultado.textContent = "Digite uma nota válida entre 0 e 10.";
        resultado.className = "";

        return;
    }

let contador = 0;
while (contador < 1){
    if (nota >=7){
        resultado.textContent = "Aprovado! Parabéns!"
    } else {
    resultado.textContent = "Reprovado! Continue Estudando!";
    resultado.style.color = "red";

}}
    contador++;

}
