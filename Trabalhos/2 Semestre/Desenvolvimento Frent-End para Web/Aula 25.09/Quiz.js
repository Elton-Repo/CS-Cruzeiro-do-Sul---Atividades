const perguntas = [
    {
            pergunta: "Qual palavra que usamos para variavel?",
            opcoes: ["var","print","echo", "write"],
            resposta : "var"
    },{
            pergunta: "Qual comando mostra alho no console?",
            opcoes: ["console.log()","print()","display()"],
            resposta: "console.log()"
    },{
            pergunta: "Qual simbolo representa igualdade estrita",
            opcoes: ["=","==","==="],
            resposta: "==="

    }];
let perguntaAtual = 0;
let pontuacao = 0;

function mostrarPergunta(){
    const pergunta = perguntas[perguntaAtual];
    document.getElementById("pergunta").textContent = pergunta.pergunta;
    const opcoes = document.getElementById("opcoes");
    opcoes.innerHTML = "";
    pergunta.opcoes.forEach(function(opcao){
        const botao = document.createElement("button");
        opcoes.appendChild(botao);
        botao.textContent = opcao;
        botao.classList.add("opcao")
        botao.addEventListener("click", function(){
            if (opcao === pergunta.resposta){
                pontuacao++;
                document.getElementById("pontuacao").textContent = pontuacao;
            }
            perguntaAtual++;

            mostrarPergunta();

        })
    })
}
mostrarPergunta();