//github.com/ThatSmittyDude
//ThatSmittyDude@outlook.com
//passingunderyellow.com
//Unix Timestamp: 1713030510

#include <iostream>
#include <cstdlib> //Include for system()

int main() {
    //Bash scrpit paths
    const char* bashScriptPath1 = "wngt.bat";
    const char* bashScriptPath2 = "scnnow.bat";

    //we will execute the bash scrpts in a CLI
    int result1 = system(("Powershell.exe -Command \"& { .\\'" + std::string(bashScriptPath1) +"' }\"").c_str());
    int result2 = system(("Powershell.exe -Command \"& { .\\'" + std::string(bashScriptPath2) +"' }\"").c_str());

    //Print results
    if (result1 == 0 && result2 == 0){
        std::cout << "Both bash scripts executed succesfully!\n";
    }else{
        std::cout << "Error executing both bahs scripts.\n";
    }
    return 0;
}