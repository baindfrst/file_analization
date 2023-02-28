#include <stdio.h>
#include <unistd.h>
#include <sys/stat.h>
#include <vector>
#include <sys/types.h>
#include <fcntl.h>

using namespace std;

class file_in_dir
{
    friend class tree;
    string name;
    int type_of_file;
};

class tree
{
    string name_of_key;
    vector <file_in_dir> files_no_dir;
    vector <tree> files_dir;
    public:
    tree(string name_in)
    {
        name_of_key = name_in;
    }
    ostream& operator <<(ostream& name_of_streame)
    {
        for(int i = 0; i != file_dir.size(); i++)
        {
            cout<<files_dir.at(i).name_of_key<<endl;
        }
        for(int i = 0; i != file_no_dir.size(); i++)
        {
            cout<<files_no_dir.at(i).name<<endl;
        }
    }

};

void red_files(int fd_inp)
{
    struct dirent* rec;
    rec = readdir(dp);
    rec = readdir(dp);
    while(rec = readdir(dp))
    {
        
    }
}

int main()
{
    int start_dir = open('/', O_RDONLY)
}