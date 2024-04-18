//github.com/ThatSmittyDude
//ThatSmittyDude@outlook.com
//passingunderyellow.com
//Unix Timestamp: 1713238781
//up2par
#include <iostream>
#include <cstdlib> //Include for system()

int main() {
    while(true){ 
   
        //Bash scrpit paths
        const char* bashScriptPath1 = "bat\\wngt.bat";
        const char* bashScriptPath2 = "bat\\scnnow.bat";
        const char* bashScriptPath3 = "bat\\dskclnp.bat";

        //we will execute the bash scrpts in a CLI
        int result1 = system(("Powershell.exe -Command \"& { .\\'" + std::string(bashScriptPath1) +"' }\"").c_str());
        int result2 = system(("Powershell.exe -Command \"& { .\\'" + std::string(bashScriptPath2) +"' }\"").c_str());
        int result3 = system(("Powershell.exe -Command \"& { .\\'" + std::string(bashScriptPath3) +"' }\"").c_str());
        break;
    }
    return 0;
    
}