#include "filesystem.h"


FileSystem::FileSystem()
{

}
FileSystem::FileSystem(string rootFolderName){

    Folder rootFolder = Folder(rootFolderName);
    system.push_back(rootFolder);
}


void FileSystem::createFile(Folder * pointerToParentFolder, string fName){ //create a file method
    File newFile = File(fName);
    pointerToParentFolder->subFiles.push_back(newFile);

}

void FileSystem::initiateNavigation(){
  navigator = &system[0]; //navigator points to root folder
  tempPath = navigator;
  pathToCurrentFolder.push_back(tempPath);
  navigator = pathToCurrentFolder[pathToCurrentFolder.size() - 1];
}

//Check if Folder exists
bool FileSystem:: folderExists(const Folder * pointerToCurrentFolder, string folderName) {
     for (int i = 0; i < pointerToCurrentFolder->subFolders.size(); ++i) {
               if (pointerToCurrentFolder->subFolders[i].folderName == folderName) {
                   return true;
               }
      }
     return false;
}

//Create Folder
void FileSystem::createFolder(Folder * pointerToParentFolder, string fName) {
    Folder newFolder = Folder(fName);
    pointerToParentFolder->subFolders.push_back(newFolder);
}

//navigate into a folder
void FileSystem::navigateInto(string fname){
tempPath = navigator;
     for (int i = 0; i < navigator->subFolders.size(); ++i) {
         if (fname == navigator->subFolders[i].folderName) {
             navigator = &(navigator->subFolders[i]);
             pathToCurrentFolder.push_back(navigator);
             break;
          }
      }
}


