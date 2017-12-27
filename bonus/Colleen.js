function external(){
    console.log(external.toString())
}

/*
    Quine in js
*/

!function main() {
/*
    ceci est un autre commentaire
*/
    external()
    console.log('\n' + '/*\n    Quine in js\n*/\n\n' + '!' + main + '()')
}()
