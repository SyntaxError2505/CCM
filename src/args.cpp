#include"ccm/args.h"

args::args(int argc, const char* argv[]){
    if(argc == 1){
        std::cout << "No arguments given, enging generation\n";
        this->error = true;
        return;
    }

    for(int i = 1; i < argc; i++){
        if(argv[i][0] == '-'){
            if(argv[i][0] != '-'){
                std::cout << "Syntax Error. Every argument needs to be followed by a String\n";
            }

            //switch for arguments
            switch(argv[i][1]){
                case 'n':
                i++;
                this->project_name = argv[i];
                break;

                case 's':
                i++;
                this->source_paths.push_back(argv[i]);
                break;

                case 'i':
                i++;
                if(argv[i][1] == 'U'){
                    include_public.push_back(true);
                }
                else if(argv[i][1] == 'R'){
                    include_public.push_back(false);
                }
                else{
                    std::cout << "Make Sure that every include statement has 'PU' or 'PR' (Public/Private) infront of the path\n";
                    this->error = true;
                }
                this->include_paths.push_back(argv[i]);
                this->include_paths[this->include_paths.size() - 1].erase(0, 2); //erase PU/PR in a beutifull one-liner
                break;

                case 'e':
                i++;
                this->subdir_paths.push_back(argv[i]);
                break;

                case 'f':
                i++;
                this->packages.push_back(argv[i]);
                break;

                case 'v':
                i++;
                this->packages.push_back(argv[i]);
                break;

                case 'c':
                i++;
                if(sizeof(argv[i]) > 1){
                    this->cpp = true;
                }
                else{
                    this->cpp = false;
                }
                break;
            }
        }
    }
}

bool args::getError(){
    return this->error;
}