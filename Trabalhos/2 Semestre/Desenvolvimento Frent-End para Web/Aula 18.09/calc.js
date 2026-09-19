document.getElementById("calcular").addEventListener("click", function(){
    const numero1 = Number(document.getElementById("numero1").value);
    const numero2 = Number(document.getElementById("numero2").value);
    const operacao = document.getElementById("operacao").value;
    let resultado;
    if (operacao === "som"){
        resultado = numero1 + numero2;
    }
    else if (operacao === "sub"){
        resultado = numero1 - numero2;
    }
    else if (operacao === "mlt"){
        resultado = numero1 * numero2;
    }
    else if (operacao === "div"){
        resultado = numero1 / numero2;
    }

    document.getElementById("resultado").textContent = resultado;
})