#include <iostream>
#include <vector>
#include "classFlowers.hpp"
#include "classWinterFlowers.hpp"
#include "classSpringFlowers.hpp"
#include "classSummerFlowers.hpp"
#include "classAutumnFlowers.hpp"
#include "classContainer.hpp"
using namespace std;

void flowersFilling(Container* container)
{
    SpringFlowers tulip ("tulip", "150"), hyacinth ("hyacinth", "200");
    SummerFlowers peony("peony", "750"), rose("rose", "200"), hydrangea("hydrangea", "750");
    AutumnFlowers chrysanthemum("chrysanthemum", "180"), aster("aster", "150"), dahlia("dahlia", "600");
    WinterFlowers orchid("orchid", "2000"), poinsettia("poinsettia", "555");
    container->addFlower(tulip);
    container->addFlower(hyacinth);
    container->addFlower(peony);
    container->addFlower(rose);
    container->addFlower(hydrangea);
    container->addFlower(chrysanthemum);
    container->addFlower(aster);
    container->addFlower(dahlia);
    container->addFlower(orchid);
    container->addFlower(poinsettia);
}

int main()
{
    Container container;
    flowersFilling(&container);
    while (true)
    {
        cout << "for showing season flower base enter 1" << endl;
        cout << "for adding new flower into the base enter 2" << endl;
        cout << "for showing the whole flower base enter 3" << endl;
        cout << "for finishing the programm enter 0" << endl;
        string number;
        cin >> number;
        if (number == "1"){
            container.printSeasonFlowers();
        } else if (number == "2"){
            container.createFlower();
        } else if (number == "3"){
            container.printAllFlowers();
        } else if (number == "0"){
            break;
        } else {
            cout << "incorrect value of the input, please, try again" << endl;
        }
        cout << endl;
    }
    return 0;
}

