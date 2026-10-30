
let formulario = document.getElementById("formulario");

formulario.addEventListener("submit", function(event) {


    event.preventDefault();


    let email = document.getElementById("email");
    let senha = document.getElementById("senha");


    let erroEmail = document.getElementById("erroEmail");
    let erroSenha = document.getElementById("erroSenha");

    erroEmail.innerHTML = "";
    erroSenha.innerHTML = "";

    email.style.border = "";
    senha.style.border = "";

    if (email.value.trim() === "") {

        email.style.border = "2px solid red";

        erroEmail.innerHTML =
            "O campo E-mail deve ser preenchido.";
    }


    if (senha.value.trim() === "") {

        senha.style.border = "2px solid red";

        erroSenha.innerHTML =
            "O campo Senha deve ser preenchido.";
    }

});



somarNumeros();


