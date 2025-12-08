#ifndef CCM_ARGS
#define CCM_ARGS

#include<string>
#include<vector>
#include<iostream>

class args{
    private:
    int c_version;
    bool cpp; //if true c++, if false c
    bool error = false; //true if error occured during read of args
    std::string cmake_version;
    std::string project_name;
    std::vector<std::string> source_paths;
    std::vector<std::string> include_paths;
    std::vector<bool> include_public; // true -> public, false -> private (same indexes as include_paths)
    std::vector<std::string> subdir_paths;
    std::vector<std::string> packages;

    public:
    args(int argc, const char* argv[]);
};

#endif