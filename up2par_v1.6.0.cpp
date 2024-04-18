//github.com/ThatSmittyDude
//ThatSmittyDude@outlook.com
//passingunderyellow.com
//Unix Timestamp: 1713464784
//up2par
#include <iostream>
#include <cstdlib> //Include for system()


int main() {
    
    while(true){ 
   
        //Bash scrpit paths
        const char* bashScriptPath4 = "bat\\up2par.bat";
        
        //we will execute the bash scrpts in a CLI
        int result4 = system(("Powershell.exe -Command \"& { .\\'" + std::string(bashScriptPath4) +"' }\"").c_str());
        
        break;
    }
    return 0;
    
}