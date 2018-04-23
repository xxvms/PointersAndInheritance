#include <iostream>
#include "Person.h"
#include "Twitter.h"

int main() {

    Person Walter("Walter", "White", 456);
    Person & rWalter = Walter;
    Person * pWalter = &Walter;



    Twitter WalterWhite ("Walter", "White", 678, "@walter");
    Person * pWalterWhite = &WalterWhite;
    Person & rPersonWalterWhite = WalterWhite;
    Twitter & rTwitterWalterWhite = WalterWhite;


    std::cout << rWalter.getName() << '\n';
    std::cout << pWalter->getName() << '\n';
    std::cout << WalterWhite.getName() << '\n';
    std::cout << rPersonWalterWhite.getName() << '\n';
    std::cout << rTwitterWalterWhite.getName() << '\n';
    std::cout << pWalterWhite->getName() << '\n';




    return 0;
}