//Criar a variavel
let numero = 0;
//Buscar id="numero"
const elementoNumero = document.getElementById("numero");
//Buscar id="aumenta"
document.getElementById("aumentar").addEventListener("click", function(){
    //O operador ++
    numero++;
    //Atualizar o texto
    elementoNumero.textContent = numero;

});
//Buscar o botão
document.getElementById("diminuir").addEventListener("click", function(){
    //O operador --  
    numero--;
    //Atualizar o valor
    elementoNumero.textContent = numero;

});

document.getElementById("zerar").addEventListener("click", function(){
    //Zerar 
    numero = 0;
    //Atualizar o valor
    elementoNumero.textContent = numero;

});