function somar(){
    let n1 = Number(window.prompt('Digite um número: '));
    let n2 = Number(window.prompt('Digite outro número: '));
    let soma = n1 + n2;
    let res = document.querySelector('section#res');
    res.innerHTML = `<p> A soma entre <mark>${n1}</mark> e <mark>${n2}</mark> é igual a <strong>${soma}</strong>!</p>`;
}
function media(){
    let m1 = Number(window.prompt('Digite um número: '));
    let m2 = Number(window.prompt('Digite outro número: '));
    let media = (m1 + m2)/2;
    let res = document.querySelector('section#res');
    res.innerHTML = `<p> A média entre <mark>${m1}</mark> e <mark>${m2}</mark> é igual a <strong>${media}</strong>!</p>`;
}
function calcular(){
    let num = Number(window.prompt('Digite um número: '));
    let res = document.querySelector('section#res');
    res.innerHTML = `<p> O Número a ser analisado aqui será o <strong>${num}</strong><p><hr>`;
    res.innerHTML += `<p> O seu valor absoluto é ${Math.abs(num)}</p>`;
    res.innerHTML += `<p> A sua parte inteira é ${Math.trunc(num)}</p>`;
    res.innerHTML += `<p> O valor inteiro mais próximo é ${Math.round(num)}</p>`;
    res.innerHTML += `<p> A sua raiz quadrada é ${Math.sqrt(num)}</p>`
    res.innerHTML += `<p> A sua raiz cubica é ${Math.cbrt(num)}</p>`
    res.innerHTML += `<p> O valor de ${num} <sup>2</sup> é ${Math.pow(num, 2)}</p>`
    res.innerHTML += `<p> O valor de ${num} <sup>2</sup> é ${Math.pow(num, 3)}</p>`
}