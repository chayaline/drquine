const fs = require('fs')
const path = require('path')
const exec = require('child_process').exec;
let int = 5
!function main(){
    if (int > 0){
        int = path.basename(__filename) === "Sully.js" ? int : int - 1
        let fileName = "Sully_" + int + ".js"
        fs.writeFile(fileName, "const fs = require('fs')\nconst path = require('path')\nconst exec = require('child_process').exec;\nlet int = " + int +"\n!" + main + "()", function(err){ if(err){ return console.log(err)}})
        exec("node " + fileName, (error, stdout, stderr) => {if (error) {console.log(error)}})
    }
}()