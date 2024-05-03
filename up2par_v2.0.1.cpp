//up2par_2.0.0
//Author: Austin Smith
//email: ThatSmittyDude@outlook.com
//GitHub.com/ThatSmittyDude
//passingunderyellow.com
//Unix Timestamp: 1714701468

#include <iostream>



int main(){
    system("winget upgrade --all");
    system("sfc /scannow");
    system("cleanmgr");
    return 0;
}