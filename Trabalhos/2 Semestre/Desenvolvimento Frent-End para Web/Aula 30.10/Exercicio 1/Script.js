
function somarNumeros() {

    // Criar um array vazio
    let numeros = [];

    // Receber vários números
    while (true) {

        let valor = window.prompt("Digite um número ou 's' para sair:");

        // Verificar se o usuário deseja parar
        if (valor.toLowerCase() === "s") {
            break;
        }

        // Converter o valor para inteiro
        let numero = parseInt(valor);

        // Armazenar o número no array
        numeros.push(numero);
    }

    // Somar os números do array
    let soma = 0;

    for (let i = 0; i < numeros.length; i++) {
        soma = soma + numeros[i];
    }

    // Exibir o resultado
    window.alert("Os números digitados foram: " + numeros +
                 "\nResultado da soma: " + soma);
}

// Executar a função
somarNumeros();
