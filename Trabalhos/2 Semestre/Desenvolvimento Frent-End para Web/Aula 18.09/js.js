//localizar o botão

let botao = document.getElementById("meuBotao");
let mensagem = document.getElementById("mensagem");
//criar um evento
botao.addEventListener("click",
function(){
    //alert o texto
    mensagem.innerHTML = "você clicou no botão";
});