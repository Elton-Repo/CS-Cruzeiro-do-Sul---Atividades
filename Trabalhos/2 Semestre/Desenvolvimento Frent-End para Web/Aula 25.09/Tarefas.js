const input = document.getElementById("tarefa");
const botao = document.getElementById("adicionar");
const lista = document.getElementById("lista");
botao.addEventListener("click", function(){
    const texto = input.value.trim();
    if (texto ===""){
        alert("Digite uma tarefa!");
        return;
    }
    const item = document.createElement("li");
    item.innerHTML = ` 
    <span>${texto}</span> 
    <button class="remover">Remover</button>
    `;
lista.appendChild(item);
input.value = "";
item.querySelector(".remover").addEventListener("click", function(){
item.remove();

});


}


)