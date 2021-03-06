#include "helpcmd.h"
#include "command.h"
#include "QApplication"
#include "gtuvos.h"

#include <iostream>
using namespace  std;


HelpCMD::~HelpCMD(){
}

HelpCMD::HelpCMD(QStringList params):ICommand(params)
{
    cout<<"HelpCmd constructed!!"<<endl;
}

void HelpCMD::execute(Ui::MainWindow *mainWindow){
    // Information for running the command
    printTerm(mainWindow,"<p style=\"white-space:pre;\">--- Help Manual ---</p>","lime");
    printTerm(mainWindow,"<p style=\"white-space:pre;\">The available commands are:</p>","lime");
    printTerm(mainWindow,"<p style=\"white-space:pre;\"> - help<br>"
                         " - cp file_source file_destination behavior(optional)<br>"
                         " - mail list<br>"
                         " - mail send \"to\" \"title\" \"message\"<br>"
                         " - ls - path (path is optional)<br>"
                         " - touch path<br>"
                         " - mkdir path<br>"
                         " - exit</p><br>","DeepSkyBlue");
}
