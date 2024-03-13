function calcularSerie(){

    const numeroIn = (document.querySelector("numeroSerie").value);
    const serieNum = document.getElementById("serieN")
    serieNum.numeroSerie = '';

     function  listaNumero(numero){
        if (num <= numeroIn){
            let serN = document.createElement("h5");
            listIrtem.textContent = numero;
            serieNum.appendChild(listIrtem);
            listaNumero(numero + 1);
        }

     }

   listaNumero(1);



}