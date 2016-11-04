#include <iostream>
#include "gtuvos.h"
#include <vector>
#include <QApplication>
#include <QVector>
#include "command.h"
#include "commandfactory.h"


using namespace std;

GTUVOS *GTUVOS::instance= NULL;

GTUVOS::GTUVOS(){
    name = "GTU Virtual OS";
    version = 0.1;

    prepareSystem();

    cout<<"GTUVOS constructed!"<<endl;
}

void GTUVOS::prepareSystem(){
    cout<< "GTUVOS prepareSystem started!!"<<endl;
    // TODO: check os files
}



double GTUVOS::getVersion() const{
    return version;
}

string GTUVOS::getName() const{
    return name;
}

bool GTUVOS::executeCMD(QString cmdStr){
    ICommand *command = CommandFactory::getInstance()->getCommand(cmdStr);

    command->execute();

    delete command;
    return true;
}

