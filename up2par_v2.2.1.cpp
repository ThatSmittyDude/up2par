//up2par_2.2.1
//Author: Austin Smith
//email: ThatSmittyDude@outlook.com
//GitHub.com/ThatSmittyDude
//passingunderyellow.com
//Unix Timestamp: 1717277660

#include <iostream>

int main(){
    system("winget upgrade --all");
    system("sfc /scannow");
    system("cleanmgr /d c /sageset:1");
    system("cleanmgr /sagerun:1");
    return 0;
}