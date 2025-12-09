#include"ccm/list-config.h"
#include"ccm/args.h"
#include"ccm/print.h"

#include<iostream>

int main(int argc, const char* argv[]){
    args arguments(argc, argv);

    if(arguments.getError()){
        std::cout << "Errors while checking args. Check your syntax\n";
        return -1;
    }
}
