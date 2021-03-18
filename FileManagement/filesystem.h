#ifndef FILESYSTEM_H
#define FILESYSTEM_H
#include "folder.h"


class FileSystem
{
public:

    FileSystem();
    FileSystem(string);
    vector<Folder> system;
    Folder* navigator;
    Folder* tempPath = navigator;
    vector<Folder*> pathToCurrentFolder;
    string size="H";
//methods
    void initiateNavigation();
    void createFile(Folder*,string);
    bool folderExists(const Folder*,string);
    void createFolder(Folder*,string);
    void navigateInto(string);
};

#endif // FILESYSTEM_H
