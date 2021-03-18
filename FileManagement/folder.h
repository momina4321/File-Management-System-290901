#ifndef FOLDER_H
#define FOLDER_H

#include "file.h"
#include <vector>
using namespace std;



class Folder
{
public:
    Folder();
    string folderName;
    vector<Folder> subFolders; //vector of type Folder
    vector<File> subFiles;  //vector of type File
    Folder(string);

};

#endif // FOLDER_H
