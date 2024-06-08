oqueRepet = prompt("O quê deseja repetir?")
vezesRepet = prompt("Digite quantas vezes deseja repetir.")
if (Number.isFinite(vezesRepet)) {
    alert("Precisa ser um número.")
} else {
    while (vezesRepet == 2 * vezesRepet) {
        alert(oqueRepet);
        vezesRepet - 1
    }
}