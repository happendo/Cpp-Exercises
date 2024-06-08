oqueRepet = prompt("O quê deseja repetir?")
vezesRepet = prompt("Digite quantas vezes deseja repetir.")
if (Number.isFinite(vezesRepet)) {
    alert("Precisa ser um número.")
} else {
    for (i = 0; i < vezesRepet; i++) {
        alert(oqueRepet);
    }
}