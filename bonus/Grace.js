const fs = require("fs")
const file = "./Grace_kid.js"
const notamain = function notatall() {
    fs.writeFile(file, 'const fs = require("fs")\nconst file = "./Grace_kid.js"\nconst notamain = ' + notamain.toString() + '\n\n/*\n    macros in js\n*/\n\n!notamain()', function(err){ if(err){ return console.log(err)}})
}

/*
    macros in js
*/

!notamain()