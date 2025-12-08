#ifndef CCM_ARGS
#define CCM_ARGS

#include<string>
#include<vector>

class args{
    private:
    int c_version;
    bool cpp; //if true c++, if false c
    std::string cmake_version;
    std::string project_name;
    std::vector<std::string> source_paths;
    std::vector<std::string> include_paths;
    std::vector<std::string> subdir_paths;
    std::vector<std::string> packages;

    public:
    args(int argc, char** argv);
};

#endif