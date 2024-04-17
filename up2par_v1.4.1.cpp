//github.com/ThatSmittyDude
//ThatSmittyDude@outlook.com
//passingunderyellow.com
//Unix Timestamp: 1713238781
//up2par
#include <iostream>
#include <cstdlib> //Include for system()

int main() {
    while(true){ //Added this loop for _v1.3 to allow user to see results before app breaks
   
        //Bash scrpit paths
        const char* bashScriptPath1 = "wngt.bat";
        const char* bashScriptPath2 = "scnnow.bat";
        const char* bashScriptPath3 = "dskclnp.bat";

        //we will execute the bash scrpts in a CLI
        int result1 = system(("Powershell.exe -Command \"& { .\\'" + std::string(bashScriptPath1) +"' }\"").c_str());
        int result2 = system(("Powershell.exe -Command \"& { .\\'" + std::string(bashScriptPath2) +"' }\"").c_str());
        int result3 = system(("Powershell.exe -Command \"& { .\\'" + std::string(bashScriptPath3) +"' }\"").c_str());

        //Print results
        if (result1 == 0 && result2 == 0){
            std::cout << "All bash scripts executed succesfully!\n";
        }else{
            std::cout << "Error executing bash scripts.\n";
        }
        return 0;

}
return 0;
}