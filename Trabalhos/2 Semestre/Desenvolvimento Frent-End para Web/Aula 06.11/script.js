function verificar(){
    let nota = parseFloat(document.getElementById("nota").value);
    let resultado = document.getElementById("resultado");
//Estrutura IF / ELSE
if(nota >= 7){
    resultado.textContent = "Aprovado";
    resultado.className = "aprovado";
} else {
    resultado.textContent = "Reprovado";
    resultado.className = "reprovado";
}
}