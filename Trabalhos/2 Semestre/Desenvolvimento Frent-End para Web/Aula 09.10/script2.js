const botoes = document.querySelectorAll(".botao-acao");
const mensagem = document.querySelector("#mensagem");
botoes.forEach((botao) => {
    botao.addEventListener("click",() => {
        const cartao = botao.closest(".card-custom");
        const titulo = cartao.querySelector("h3").textContent;
        const texto = cartao.querySelector("p").textContent;
        mensagem.textContent = `${titulo}: ${texto}`;
        mensagem.className = "alert alert-primary mt-4";

    });
});